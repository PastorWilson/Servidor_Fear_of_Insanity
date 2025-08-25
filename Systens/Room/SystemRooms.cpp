#include "SystemRoom.h"
#include <iostream>
using namespace std;

int random_id_room() { return rand(); }

void SystemRooms::add_room(const string &name, const string &ip, const string &password, bool isPrivate, int port, int players)
{
    int id = random_id_room();

    Room room = Room(id, name, ip, password, isPrivate, port, players);
}
Room SystemRooms::get_room_by_id(int id)
{
    Room room = list_rooms[id];
    return room;
}
vector<Room> SystemRooms::list_room()
{
    if (this->list_rooms.empty())
    {
        cout << "lista vazia";
    }
    return this->list_rooms;
}

