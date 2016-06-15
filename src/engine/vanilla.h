#ifndef MINISPHERE__VANILLA_H__INCLUDED
#define MINISPHERE__VANILLA_H__INCLUDED

#include "bytearray.h"
#include "spriteset.h"

void initialize_vanilla_api (duk_context* ctx);

void duk_push_sphere_bytearray (duk_context* ctx, bytearray_t* array);
void duk_push_sphere_spriteset (duk_context* ctx, spriteset_t* spriteset);

#endif // MINISPHERE__VANILLA_H__INCLUDED
