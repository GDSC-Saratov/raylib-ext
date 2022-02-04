#ifndef RAYMATH_OPERATORS_H
#define RAYMATH_OPERATORS_H

#include "raymath.hpp"

/* Vector2 */

bool
operator==(const Vector2 &v1, const Vector2 &v2)
noexcept
{
    return v1.x == v2.x && v1.y == v2.y;
}

Vector2 
operator+(const Vector2 &v1, const Vector2 &v2)
noexcept
{
    return Vector2Add(v1, v2);
}

Vector2 
operator-(const Vector2 &v1, const Vector2 &v2)
noexcept
{
    return Vector2Subtract(v1, v2);
}

Vector2
operator-(const Vector2 &v)
noexcept
{
    return Vector2Negate(v);
}

Vector2 
operator*(const Vector2 &v, const float &f)
noexcept
{
    return Vector2Scale(v, f);
}

Vector2 
operator/(const Vector2 &v, const float &f)
{
    return Vector2Scale(v, 1 / f);
}

Vector2&
operator+=(Vector2 &v1, const Vector2 &v2)
noexcept
{
    v1.x += v2.x;
    v1.y += v2.y;
    return v1;
}

Vector2&
operator-=(Vector2 &v1, const Vector2 &v2)
noexcept
{
    v1.x -= v2.x;
    v1.y -= v2.y;
    return v1;
}

Vector2&
operator*=(Vector2 &v, const float &f)
noexcept
{
    v.x *= f;
    v.y *= f;
    return v;
}

Vector2&
operator/=(Vector2 &v, const float &f)
{
    v.x /= f;
    v.y /= f;
    return v;
}

/* Vector3 */

bool
operator==(const Vector3 &v1, const Vector3 &v2)
noexcept
{
    return v1.x == v2.x && v1.y == v2.y && v1.z == v2.z;
}

Vector3 
operator+(const Vector3 &v1, const Vector3 &v2)
noexcept
{
    return Vector3Add(v1, v2);
}

Vector3 
operator-(const Vector3 &v1, const Vector3 &v2)
noexcept
{
    return Vector3Subtract(v1, v2);
}

Vector3
operator-(const Vector3 &v)
noexcept
{
    return Vector3Negate(v);
}

Vector3 
operator*(const Vector3 &v, const float &f)
noexcept
{
    return Vector3Scale(v, f);
}

Vector3 
operator/(const Vector3 &v, const float &f)
{
    return Vector3Scale(v, 1 / f);
}

Vector3&
operator+=(Vector3 &v1, const Vector3 &v2)
noexcept
{
    v1.x += v2.x;
    v1.y += v2.y;
    v1.z += v2.z;
    return v1;
}

Vector3&
operator-=(Vector3 &v1, const Vector3 &v2)
noexcept
{
    v1.x -= v2.x;
    v1.y -= v2.y;
    v1.z -= v2.z;
    return v1;
}

Vector3&
operator*=(Vector3 &v, const float &f)
noexcept
{
    v.x *= f;
    v.y *= f;
    v.z *= f;
    return v;
}

Vector3&
operator/=(Vector3 &v, const float &f)
{
    v.x /= f;
    v.y /= f;
    v.z /= f;
    return v;
}

/* Vector4/Quaternion */

bool
operator==(const Vector4 &v1, const Vector4 &v2)
noexcept
{
    return v1.x == v2.x && v1.y == v2.y && v1.z == v2.z;
}

Vector4 
operator+(const Vector4 &v1, const Vector4 &v2)
noexcept
{
    return QuaternionAdd(v1, v2);
}

Vector4 
operator-(const Vector4 &v1, const Vector4 &v2)
noexcept
{
    return QuaternionSubtract(v1, v2);
}

Vector4
operator-(const Vector4 &v)
noexcept
{
    return QuaternionScale(v, -1);
}

Vector4 
operator*(const Vector4 &v, const float &f)
noexcept
{
    return QuaternionScale(v, f);
}

Vector4 
operator/(const Vector4 &v, const float &f)
{
    return QuaternionScale(v, 1 / f);
}

Vector4&
operator+=(Vector4 &v1, const Vector4 &v2)
noexcept
{
    v1.x += v2.x;
    v1.y += v2.y;
    v1.z += v2.z;
    v1.w += v2.w;
    return v1;
}

Vector4&
operator-=(Vector4 &v1, const Vector4 &v2)
noexcept
{
    v1.x -= v2.x;
    v1.y -= v2.y;
    v1.z -= v2.z;
    v1.w -= v2.w;
    return v1;
}

Vector4&
operator*=(Vector4 &v, const float &f)
noexcept
{
    v.x *= f;
    v.y *= f;
    v.z *= f;
    v.w *= f;
    return v;
}

Vector4&
operator/=(Vector4 &v, const float &f)
{
    v.x /= f;
    v.y /= f;
    v.z /= f;
    v.w /= f;
    return v;
}

/* Matrix */

Matrix 
operator+(const Matrix &m1, const Matrix &m2)
noexcept
{
    return MatrixAdd(m1, m2);
}

Matrix 
operator-(const Matrix &m1, const Matrix &m2)
noexcept
{
    return MatrixSubtract(m1, m2);
}

Matrix 
operator*(const Matrix &m1, const Matrix &m2)
noexcept
{
    return MatrixMultiply(m1, m2);
}

Matrix&
operator+=(Matrix &m1, const Matrix &m2)
noexcept
{
    m1 = MatrixAdd(m1, m2);
    return m1;
}

Matrix&
operator-=(Matrix &m1, const Matrix &m2)
noexcept
{
    m1 = MatrixSubtract(m1, m2);
    return m1;
}

Matrix&
operator*=(Matrix &m1, const Matrix &m2)
noexcept
{
    m1 = MatrixMultiply(m1, m2);
    return m1;
}

#endif // RAYMATH_OPERATORS_H
