#ifndef RAYLIB_EXT_HPP
#define RAYLIB_EXT_HPP

#include <string>
#include <raylib.h>
#include <raygui.h>
#include <rlgl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <raymath.h>

#ifdef __cplusplus
}
#endif


/* Vector2 */

bool operator==(const Vector2 &v1, const Vector2 &v2) noexcept;
Vector2 operator+(const Vector2 &v1, const Vector2 &v2) noexcept;
Vector2 operator-(const Vector2 &v1, const Vector2 &v2) noexcept;
Vector2 operator-(const Vector2 &v) noexcept;
Vector2 operator*(const Vector2 &v, const float &f) noexcept;
Vector2 operator/(const Vector2 &v, const float &f);
Vector2& operator+=(Vector2 &v1, const Vector2 &v2) noexcept;
Vector2& operator-=(Vector2 &v1, const Vector2 &v2) noexcept;
Vector2& operator*=(Vector2 &v, const float &f) noexcept;
Vector2& operator/=(Vector2 &v, const float &f);

/* Vector3 */

bool operator==(const Vector3 &v1, const Vector3 &v2) noexcept;
Vector3 operator+(const Vector3 &v1, const Vector3 &v2) noexcept;
Vector3 operator-(const Vector3 &v1, const Vector3 &v2) noexcept;
Vector3 operator-(const Vector3 &v) noexcept;
Vector3 operator*(const Vector3 &v, const float &f) noexcept;
Vector3 operator/(const Vector3 &v, const float &f);
Vector3& operator+=(Vector3 &v1, const Vector3 &v2) noexcept;
Vector3& operator-=(Vector3 &v1, const Vector3 &v2) noexcept;
Vector3& operator*=(Vector3 &v, const float &f) noexcept;
Vector3& operator/=(Vector3 &v, const float &f);

/* Vector4/Quaternion */

bool operator==(const Vector4 &v1, const Vector4 &v2) noexcept;
Vector4 operator+(const Vector4 &v1, const Vector4 &v2) noexcept;
Vector4 operator-(const Vector4 &v1, const Vector4 &v2) noexcept;
Vector4 operator-(const Vector4 &v) noexcept;
Vector4 operator*(const Vector4 &v, const float &f) noexcept;
Vector4 operator/(const Vector4 &v, const float &f);
Vector4& operator+=(Vector4 &v1, const Vector4 &v2) noexcept;
Vector4& operator-=(Vector4 &v1, const Vector4 &v2) noexcept;
Vector4& operator*=(Vector4 &v, const float &f) noexcept;
Vector4& operator/=(Vector4 &v, const float &f);

/* Matrix */

Matrix operator+(const Matrix &m1, const Matrix &m2) noexcept;
Matrix operator-(const Matrix &m1, const Matrix &m2) noexcept;
Matrix operator*(const Matrix &m1, const Matrix &m2) noexcept;
Matrix& operator+=(Matrix &m1, const Matrix &m2) noexcept;
Matrix& operator-=(Matrix &m1, const Matrix &m2) noexcept;
Matrix& operator*=(Matrix &m1, const Matrix &m2) noexcept;

/* Core */

inline void 
InitWindow(int width, int height, const std::string &title);

inline void 
SetWindowTitle(const std::string &title);

inline void
SetClipboardText(const std::string &text);

inline Shader
LoadShader(const std::string &vsFileName, const std::string &fsFileName);

inline Shader
LoadShaderFromMemory(const std::string &vsCode, const std::string &fsCode);

inline int
GetShaderLocation(Shader shader, const std::string &uniformName);

inline int
GetShaderLocationAttrib(Shader shader, const std::string &attribName);

inline void 
TakeScreenshot(const std::string &fileName);

inline unsigned char *
LoadFileData(const std::string &fileName, unsigned int *bytesRead);

inline bool
SaveFileData(const std::string &fileName, void *data, unsigned int bytesToWrite);

inline char *
LoadFileText(const std::string &fileName);

inline bool
SaveFileText(const std::string &fileName, char *text);

inline bool
FileExists(const std::string &fileName);

inline bool
DirectoryExists(const std::string &dirPath);

inline bool
IsFileExtension(const std::string &fileName, const std::string &ext);

inline const char *
GetFileExtension(const std::string &fileName);

inline const char *
GetFileName(const std::string &filePath);

inline const char *
GetFileNameWithoutExt(const std::string &filePath);

inline const char *
GetDirectoryPath(const std::string &filePath);

inline const char *
GetPrevDirectoryPath(const std::string &dirPath);

inline bool
ChangeDirectory(const std::string &dir);

inline long
GetFileModTime(const std::string &fileName);

inline void
OpenURL(const std::string &url);

/* Textures */

inline Image
LoadImage(const std::string &fileName);

inline Image
LoadImageRaw(const std::string &fileName, int width, int height, int format, 
             int headerSize);

inline Image
LoadImageAnim(const std::string &fileName, int *frames);

inline Image
LoadImageFromMemory(const std::string &fileType, const unsigned char *fileData,
                    int dataSize);

inline bool
ExportImage(Image image, const std::string &fileName);

inline bool
ExportImageAsCode(Image image, const std::string &fileName);

inline Image
ImageText(const std::string &text, int fontSize, Color color);

inline Image
ImageTextEx(Font font, const std::string &text, float fontSize, float spacing,
            Color tint);

inline void
ImageDrawText(Image *dst, const std::string &text, int posX, int posY,
              int fontSize, Color color);

inline void
ImageDrawTextEx(Image *dst, Font font, const std::string &text,
                Vector2 position, float fontSize, float spacing, Color tint);

inline Texture2D
LoadTexture(const std::string &fileName);

/* Text */

inline Font
LoadFont(const std::string &fileName);

inline Font
LoadFontEx(const std::string &fileName, int fontSize, int *fontChars,
           int glyphCount);

inline Font
LoadFontFromMemory(const std::string &fileType, const unsigned char *fileData,
                   int dataSize, int fontSize, int *fontChars, int glyphCount);

inline void
DrawText(const std::string &text, int posX, int posY, int fontSize, Color color);

inline void
DrawTextEx(Font font, const std::string &text, Vector2 position, float fontSize,
           float spacing, Color tint);

inline void
DrawTextPro(Font font, const std::string &text, Vector2 position,
            Vector2 origin, float rotation, float fontSize, float spacing,
            Color tint);

inline int
MeasureText(const std::string &text, int fontSize);

inline Vector2
MeasureTextEx(Font font, const std::string &text, float fontSize, float spacing);

inline int*
LoadCodepoints(const std::string &text, int *count);

inline int
GetCodepointCount(const std::string &text);

inline int
GetCodepoint(const std::string &text, int *bytesProcessed);

/* Models */

inline Model
LoadModel(const std::string &fileName);

inline bool
ExportMesh(Mesh mesh, const std::string &fileName);

inline Material*
LoadMaterials(const std::string &fileName, int *materialCount);

inline ModelAnimation*
LoadModelAnimations(const std::string &fileName, unsigned int *animCount);

/* Audio */

inline Wave
LoadWave(const std::string &fileName);

inline Wave
LoadWaveFromMemory(const std::string &fileType, const unsigned char *fileData,
                   int dataSize);

inline Sound
LoadSound(const std::string &fileName);

inline bool
ExportWave(Wave wave, const std::string &fileName);

inline bool
ExportWaveAsCode(Wave wave, const std::string &fileName);

inline Music
LoadMusicStream(const std::string &fileName);

inline Music
LoadMusicStreamFromMemory(const std::string &fileType, unsigned char *data,
                          int dataSize);

#endif // RAYLIB_EXT_HPP
