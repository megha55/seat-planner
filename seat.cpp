#include "seat.h"

// class details member functions

void details :: room_details()
{
	cin>>t_rooms;
	for(int i=0; i<t_rooms; i++)
	{
		cin>>room_no[i]>>rows[i]>>cols[i];
	}
}

void details :: rollno_details()
{
	cin>>t_branches;
	for(int i=0; i<t_branches; i++)
	{
		cin>>branch[i]>>start_roll[i]>>end_roll[i];
	}
}

// Class processing members declaration

int seat_planner :: nxt_roll;
int seat_planner :: nxt_room;


void seat_planner :: get_details()
{
	room_details();
	rollno_details();
}

void seat_planner :: set_room()
{
	if(nxt_room<t_rooms)
	{
		row = rows[nxt_room];
		col = cols[nxt_room];
		room = room_no[nxt_room];
		nxt_room++;
	}
	else
		break;
}

void seat_planner :: set_rollno()
{
	if(nxt_roll<t_rollno)
	{
		start_roll1 = start_roll[nxt_roll];
		end_roll1 = end_roll[nxt_roll];
		nxt_roll++;
		
		if(nxt_roll<t_rollno)
		{
			start_roll2 = start_roll[nxt_roll];
			end_roll2 = end_roll[nxt_roll];
			nxt_roll++;
		}	
	}
}

void seat_planner :: seat_plan()
{

}

void seat_planner :: output(int r, int c)
{

}

