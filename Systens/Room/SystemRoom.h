#pragma once

#include <string>
#include <vector>
#include "Room.h"

using namespace std;

class SystemRooms
{
private:
    vector<Room> list_rooms;
    int id = 1;

public:
    void add_room(const string &name, const string &ip, const string &password, bool isPrivate, int port, int players);
    Room get_room_by_id(int id);
    vector<Room> list_room();

};
