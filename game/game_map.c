﻿#include "game_map.h"
#include "game_goble.h"
#include "game_key.h"   //以后替换为control
//外后需要用handle处理更好扩展
int game_map_run(game_map_t *map)
{
    int status;
    game_status_set(GAME_RUNNING);
    do
    {
        map->_show();
        status = map->_select(game_get_key());   //这里写得不好
        // status = game_status_get();
    } while(status  != GAME_MAP_FINISH);
    game_status_set(GAME_NODE_FINISH);
    return status;
}

