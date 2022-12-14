#ifndef TATATYPE_H
# define TATATYPE_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <curses.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdbool.h>


typedef struct word_node {
	int row;
	int col;
	char *string;
	int color;
	struct word_node *next;
} word_node;

void game();
word_node *make_game_board();
char *random_word();
word_node *make_word_node_list();
void game();
void game_header();
void game_timer(pid_t pid);

#endif