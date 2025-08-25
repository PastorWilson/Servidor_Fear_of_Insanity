#pragma once
#include <string>

using namespace std;

class Room
{
private:
    int id_room;
    string name_room;
    string ip_room;
    string password;
    bool isPrivate;
    int port_room;
    int number_player;

public:
    Room(int id, string name, string ip, string pass, bool priv, int port, int players)
        : id_room(id),
          name_room(name),
          ip_room(ip), password(pass),
          isPrivate(priv),
          port_room(port),
          number_player(players)
    {
    }

    // get methods
    int get_number_player() const { return number_player; }
    string get_ip_room() const { return ip_room; }
    string get_name_room() const { return name_room; }
    int get_port_room() const { return port_room; }
    bool get_is_private() const { return isPrivate; }
    string get_password() const { return password; }

    // set methods
    void set_password(const string &value) { this->password = value; }
    void set_IsPrivate(bool value) { this->isPrivate = value; }
    void set_name_room(const string &value) { this->name_room = value; }
    void set_number_player(int value) { this->number_player = value; }
};
