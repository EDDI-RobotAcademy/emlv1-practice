#ifndef __BOARD_H__
#define __BOARD_H__

#include "../../post/entity/post.h"

typedef struct _board_info board_info;
struct _board_info 
{
    char *boardName;
    post_list *boardPostList;
};

#endif