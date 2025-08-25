#include <string>
using namespace std;
class Save
{
private:
    int id_player, id_save;
    string name_player, data_save, url_save, formato_save, level;
    float money_player;
    char hash_save[64];

public:
    int get_id_save() const { return this->id_save; }
    int get_id_player() const { return this->id_player; }
};