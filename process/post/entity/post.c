#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "post.h"

int unique_post_value_count = 0;

// [EMLV1P-PROCESS-8] TO-DO : Post Entity를 추가합니다. 

post_info *init_post(char *postName, char *postWriterName, char *postWriterPassword, unsigned short postViews, unsigned short postRecommendation, char *postDetails)
{
    int postName_length = strlen(postName) + 1;
    int postWriterName_length = strlen(postWriterName) + 1;
    int postWriterPassword_length = strlen(postWriterPassword);
    int postDetails_length = strlen(postDetails);

    post_info *post_object = (post_info *)malloc(sizeof(post_info));

    post_object->postName = (char *)malloc(sizeof(char) * postName_length);
    strncpy(post_object->postName, postName, postName_length);

    post_object->postWriterName = (char *)malloc(sizeof(char) * postWriterName_length);
    strncpy(post_object->postWriterName, postWriterName, postWriterName_length);

    memset(post_object->postWriterPassword, 0x0, POST_WRITER_PASSWORD_MAX);
    strncpy(post_object->postWriterPassword, postWriterPassword, postWriterPassword_length);
    
    memset(post_object->postDetails, 0x0, POST_DETAILS_MAX);
    strncpy(post_object->postDetails, postDetails, postDetails_length);
    
    post_object->postViews = postViews;
    post_object->postRecommendation = postRecommendation;

    post_object->unique_value = unique_post_value_count++;

    return post_object;
}

void print_post (post_info *post_object)
{
    printf("post unique value : %d\n", post_object->unique_value);
    printf("post name : %s\n", post_object->postName);
    printf("post writer name : %s\n", post_object->postWriterName);
    printf("post writer password : %s\n", post_object->postWriterPassword);
    printf("post views : %d\n", post_object->postViews);
    printf("post recommendation : %d\n", post_object->postRecommendation);
    printf("post details : %s\n", post_object->postDetails);
}

void free_post(post_info *post_object)
{
    printf("free post memory\n");
    printf("post_object : 0x%x\n", post_object);
    printf("post_object->postName : %s\n", post_object->postName);
}