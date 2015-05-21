#ifndef MINISPHERE__GALILEO_H__INCLUDED
#define MINISPHERE__GALILEO_H__INCLUDED

#include "shader.h"

typedef struct vertex    vertex_t;
typedef struct shape     shape_t;
typedef struct group     group_t;
typedef struct shaderset shaderset_t;

typedef enum shape_type shape_type_t;

extern void initialize_galileo (void);
extern void shutdown_galileo   (void);

extern vertex_t vertex (float x, float y, float u, float v, color_t color);

extern shaderset_t* new_shaderset   (shader_t* pixel_shader, shader_t* vertex_shader);
extern shaderset_t* ref_shaderset   (shaderset_t* shaderset);
extern void         free_shaderset  (shaderset_t* shaderset);
extern void         apply_shaderset (shaderset_t* shaderset);

extern group_t* new_group          (void);
extern group_t* ref_group          (group_t* group);
extern void     free_group         (group_t* group);
extern void     set_group_xy       (group_t* group, float x, float y);
extern bool     add_group_shape    (group_t* group, shape_t* shape);
extern void     remove_group_shape (group_t* group, int index);
extern void     clear_group        (group_t* group);
extern void     draw_group         (const group_t* group);

extern shape_t*     new_shape           (shape_type_t type, image_t* texture);
extern shape_t*     ref_shape           (shape_t* shape);
extern void         free_shape          (shape_t* shape);
extern float_rect_t get_shape_bounds    (const shape_t* shape);
extern image_t*     get_shape_texture   (const shape_t* shape);
extern void         set_shape_texture   (shape_t* shape, image_t* texture);
extern bool         add_shape_vertex    (shape_t* shape, vertex_t vertex);
extern void         remove_shape_vertex (shape_t* shape, int index);
extern void         draw_shape          (shape_t* shape);

extern void init_galileo_api (void);

struct vertex
{
	float   x, y;
	float   u, v;
	color_t color;
};

enum shape_type
{
	SHAPE_AUTO,
	SHAPE_POINT_LIST,
	SHAPE_LINE_LIST,
	SHAPE_TRIANGLE_LIST,
	SHAPE_TRIANGLE_FAN,
	SHAPE_TRIANGLE_STRIP,
	SHAPE_MAX
};

#endif // MINISPHERE__GALILEO_H__INCLUDED
