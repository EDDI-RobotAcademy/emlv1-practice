#ifndef __POST_H__
#define __POST_H__

#define POST_WRITER_PASSWORD_MAX    16  
#define POST_DETAILS_MAX            50

typedef struct _post_info post_info;

struct _post_info
{
    int unique_value;
    char *postName; // 게시물 제목
    char *postWriterName; // 글쓴이 익명
    char postWriterPassword[POST_WRITER_PASSWORD_MAX]; // 글쓴이의 게시물 비밀번호 
    unsigned short postViews; // 게시물 조회수
    unsigned short postRecommendation; // 게시물 추천수
    char postDetails[POST_DETAILS_MAX]; // 게시물 내용
};

typedef struct _post_list post_list;
struct _post_list
{
    post_info *prev_post;
    post_info *next_post;
    post_info post;
};

post_info *init_post(char *postName, char *postWriterName, char *postWriterPassword, unsigned short postViews, unsigned short postRecommendation, char *postDetails);

#endif