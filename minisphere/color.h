extern ALLEGRO_COLOR blend_colors (ALLEGRO_COLOR color1, ALLEGRO_COLOR color2, float w1, float w2);

extern void          init_color_api           (void);
extern void          duk_push_sphere_color    (duk_context* ctx, ALLEGRO_COLOR color);
extern ALLEGRO_COLOR duk_require_sphere_color (duk_context* ctx, duk_idx_t index);
