#include "Save.h"
#include <vector>

class SystemSave
{
private:
    int id_player;
    vector<Save> list_saves[6];

public:
    Save get_save_by_id(int id, int id_player);
    void add_save();
    void remove_save_id(int id, int id_player);
};