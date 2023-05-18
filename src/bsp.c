#include "bsp.h"

static struct board_s board ={0};

board_t BoardCreate(void){



    return &board;
}