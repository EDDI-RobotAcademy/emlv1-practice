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

#endif