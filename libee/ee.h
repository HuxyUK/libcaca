/*
 *   libee         ASCII-Art library
 *   Copyright (c) 2002, 2003 Sam Hocevar <sam@zoy.org>
 *                 All Rights Reserved
 *
 *   $Id$
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/*
 * Colors
 */
#define EE_BLACK 1
#define EE_GREEN 2
#define EE_YELLOW 3
#define EE_WHITE 4
#define EE_RED 5
#define EE_GRAY 6
#define EE_LIGHTGRAY 7
#define EE_BLUE 8
#define EE_CYAN 9
#define EE_MAGENTA 10

/*
 * Types
 */
struct ee_sprite;

/*
 * Prototypes
 */
int ee_init(void);
void ee_set_delay(int);
int ee_get_width(void);
int ee_get_height(void);
void ee_refresh(void);
void ee_end(void);

char ee_get_key(void);

void ee_color(int);
void ee_putchar(int, int, char);
void ee_putstr(int, int, char *);
void ee_clear(void);

void ee_draw_line(int, int, int, int, char);
void ee_draw_thin_line(int, int, int, int);
void ee_draw_circle(int, int, int, char);
void ee_draw_ellipse(int, int, int, int, char);
void ee_fill_triangle(int, int, int, int, int, int, char);

int ee_rand(int, int);
int ee_sqrt(int);

struct ee_sprite * ee_load_sprite(const char *);
void ee_set_sprite_frame(struct ee_sprite *, int);
int ee_get_sprite_frame(struct ee_sprite *);
void ee_draw_sprite(int, int, struct ee_sprite *);
void ee_free_sprite(struct ee_sprite *);

