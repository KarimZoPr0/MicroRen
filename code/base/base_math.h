//
// Created by Karim on 2024-11-12.
//

#ifndef BASE_MATH_C_H
#define BASE_MATH_C_H

#endif //BASE_MATH_C_H

//- karim: vector types
typedef struct
{
    F32 x;
    F32 y;
} vec2_t;

typedef struct
{
    F32 x;
    F32 y;
    F32 z;
} vec3_t;

typedef struct vec4_t
{
    F32 x, y, z, w;
} vec4_t;

typedef struct
{
    F32 x, y, w, h;
} rect_t;

//- karim: matrix types
typedef struct mat4_t mat4_t;
struct mat4_t
{
    F32 m[4][4];
};

// Vector 2 functions
function float vec2_length(vec2_t v);
function vec2_t vec2_add(vec2_t a, vec2_t b);
function vec2_t vec2_sub(vec2_t a, vec2_t b);
function vec2_t vec2_mul(vec2_t a, F32 factor);
function vec2_t vec2_div(vec2_t a, F32 factor);
function float vec2_dot(vec2_t a, vec2_t b);

// Vector 3 functions
function float vec3_length(vec3_t v);
function vec3_t vec3_add(vec3_t a, vec3_t b);
function vec3_t vec3_sub(vec3_t a, vec3_t b);
function vec3_t vec3_mul(vec3_t a, F32 factor);
function vec3_t vec3_div(vec3_t a, F32 factor);
function vec3_t vec3_cross(vec3_t a, vec3_t b);
function float vec3_dot(vec3_t a, vec3_t b);

function vec3_t vec3_rotate_x( vec3_t v, float angle );
function vec3_t vec3_rotate_y( vec3_t v, float angle );
function vec3_t vec3_rotate_z( vec3_t v, float angle );

//- karim: vector 4 functions
function vec4_t vec4_from_vec3(vec3_t v);
function vec3_t vec3_from_vec4(vec4_t v);

//- karim: vector projection
function vec2_t project(vec3_t point, F32 fov_factor);

//- karim: matrix functions
function mat4_t mat4_identity(void);
function mat4_t mat4_make_translation(F32 sx, F32 sy, F32 sz);
function mat4_t mat4_make_scale(F32 sx, F32 sy, F32 sz);
function mat4_t mat4_make_rotation_x(F32 angle);
function mat4_t mat4_make_rotation_y(F32 angle);
function mat4_t mat4_make_rotation_z(F32 angle);
function vec4_t mat4_mul_vec4(mat4_t m, vec4_t v);
function mat4_t mat4_mul_mat4(mat4_t a, mat4_t b);
