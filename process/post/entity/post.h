#ifndef __POST_H__
#define __POST_H__

typedef struct _post_info post_info;
struct _post_info 
{
    char *postName;
    char *postWriterName;
    char *postWriterPassword;
    unsigned short postViews;
    unsigned short postRecommendation;
    char *postContent;
};

typedef struct _post_list post_list;
struct _post_list
{
    post_info *prev_post;
    post_info *next_post;
    post_info post;
};

#endif