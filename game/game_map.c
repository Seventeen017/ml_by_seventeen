﻿#include "game_map.h"
#include "game_goble.h"
#include "game_key.h"   //以后替换为control
//外后需要用handle处理更好扩展
int game_map_run(game_map_t *map)
{
    int status = game_status_get();
    while(status  != GAME_MAP_FINISH && status != GAME_OVER)
    {
        map->_show();
        status = map->_select(game_get_key());   //这里写得不好
        game_status_set(status);                                      //这里写得不好不应该在大框架设置状态
    }
    return status;
}


