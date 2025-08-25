#include "SystemSave.h"

void SystemSave::add_save()

{
}
void SystemSave::remove_save_id(int id, int id_player)
{
}
Save SystemSave::get_save_by_id(int id, int id_player)
{
    for (int i = 0; i <= list_saves->size(); i++)
    {
        Save& save =  list_saves->at(i);
        if(save.get_id_save() == id && save.get_id_player() == id_player){
            return save;
        }
       
    }
}