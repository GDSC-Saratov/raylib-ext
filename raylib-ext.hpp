#ifndef RAYLIB_CPP_HPP
#define RAYLIB_CPP_HPP

#include <string>
#include <raylib.h>

/* Core */

inline __attribute__((always_inline)) void 
InitWindow(int width, int height, const std::string &title)
{
    InitWindow(width, height, title.c_str());
}

inline __attribute__((always_inline)) void 
SetWindowTitle(const std::string &title)
{
    SetWindowTitle(title.c_str());
}

inline __attribute__((always_inline)) void
SetClipboardText(const std::string &text)
{
    SetClipboardText(text.c_str());
}

inline __attribute__((always_inline)) Shader
LoadShader(const std::string &vsFileName, const std::string &fsFileName)
{
    return LoadShader(vsFileName.c_str(), fsFileName.c_str());
}

inline __attribute__((always_inline)) Shader
LoadShaderFromMemory(const std::string &vsCode, const std::string &fsCode)
{
    return LoadShaderFromMemory(vsCode.c_str(), fsCode.c_str());
}

inline __attribute__((always_inline)) int
GetShaderLocation(Shader shader, const std::string &uniformName)
{
    return GetShaderLocation(shader, uniformName.c_str());
}

inline __attribute__((always_inline)) int
GetShaderLocationAttrib(Shader shader, const std::string &attribName)
{
    return GetShaderLocationAttrib(shader, attribName.c_str());
}

inline __attribute__((always_inline)) void 
TakeScreenshot(const std::string &fileName)
{
    TakeScreenshot(fileName.c_str());
}

inline __attribute__((always_inline)) unsigned char *
LoadFileData(const std::string &fileName, unsigned int *bytesRead)
{
    return LoadFileData(fileName.c_str(), bytesRead);
}

inline __attribute__((always_inline)) bool
SaveFileData(const std::string &fileName, void *data, unsigned int bytesToWrite)
{
    return SaveFileData(fileName.c_str(), data, bytesToWrite);
}

inline __attribute__((always_inline)) char *
LoadFileText(const std::string &fileName)
{
    return LoadFileText(fileName.c_str());
}

inline __attribute__((always_inline)) bool
SaveFileText(const std::string &fileName, char *text)
{
    return SaveFileText(fileName.c_str(), text);
}

inline __attribute__((always_inline)) bool
FileExists(const std::string &fileName)
{
    return FileExists(fileName.c_str());
}

inline __attribute__((always_inline)) bool
DirectoryExists(const std::string &dirPath)
{
    return DirectoryExists(dirPath.c_str());
}

inline __attribute__((always_inline)) bool
IsFileExtension(const std::string &fileName, const std::string &ext)
{
    return IsFileExtension(fileName.c_str(), ext.c_str());
}

inline __attribute__((always_inline)) const char *
GetFileExtension(const std::string &fileName)
{
    return GetFileExtension(fileName.c_str());
}

inline __attribute__((always_inline)) const char *
GetFileName(const std::string &filePath)
{
    return GetFileName(filePath.c_str());
}

inline __attribute__((always_inline)) const char *
GetFileNameWithoutExt(const std::string &filePath)
{
    return GetFileNameWithoutExt(filePath.c_str());
}

inline __attribute__((always_inline)) const char *
GetDirectoryPath(const std::string &filePath)
{
    return GetDirectoryPath(filePath.c_str());
}

inline __attribute__((always_inline)) const char *
GetPrevDirectoryPath(const std::string &dirPath)
{
    return GetPrevDirectoryPath(dirPath.c_str());
}

inline __attribute__((always_inline)) bool
ChangeDirectory(const std::string &dir)
{
    return ChangeDirectory(dir.c_str());
}

inline __attribute__((always_inline)) long
GetFileModTime(const std::string &fileName)
{
    return GetFileModTime(fileName.c_str());
}

inline __attribute__((always_inline)) void
OpenURL(const std::string &url)
{
    return OpenURL(url.c_str());
}

/* Textures */

inline __attribute__((always_inline)) Image
LoadImage(const std::string &fileName)
{
    return LoadImage(fileName.c_str());
}

inline __attribute__((always_inline)) Image
LoadImageRaw(const std::string &fileName, int width, int height, int format, 
             int headerSize)
{
    return LoadImageRaw(fileName.c_str(), width, height, format, headerSize);
}

inline __attribute__((always_inline)) Image
LoadImageAnim(const std::string &fileName, int *frames)
{
    return LoadImageAnim(fileName.c_str(), frames);
}

inline __attribute__((always_inline)) Image
LoadImageFromMemory(const std::string &fileType, const unsigned char *fileData,
                    int dataSize)
{
    return LoadImageFromMemory(fileType.c_str(), fileData, dataSize);
}

inline __attribute__((always_inline)) bool
ExportImage(Image image, const std::string &fileName)
{
    return ExportImage(image, fileName.c_str());
}

inline __attribute__((always_inline)) bool
ExportImageAsCode(Image image, const std::string &fileName)
{
    return ExportImageAsCode(image, fileName.c_str());
}

inline __attribute__((always_inline)) Image
ImageText(const std::string &text, int fontSize, Color color)
{
    return ImageText(text.c_str(), fontSize, color);
}

inline __attribute__((always_inline)) Image
ImageTextEx(Font font, const std::string &text, float fontSize, float spacing,
            Color tint)
{
    return ImageTextEx(font, text.c_str(), fontSize, spacing, tint);
}

inline __attribute__((always_inline)) void
ImageDrawText(Image *dst, const std::string &text, int posX, int posY,
              int fontSize, Color color)
{
    ImageDrawText(dst, text.c_str(), posX, posY, fontSize, color);
}

inline __attribute__((always_inline)) void
ImageDrawTextEx(Image *dst, Font font, const std::string &text,
                Vector2 position, float fontSize, float spacing, Color tint)
{
    ImageDrawTextEx(dst, font, text.c_str(), position, fontSize, spacing, tint);
}

inline __attribute__((always_inline)) Texture2D
LoadTexture(const std::string &fileName)
{
    return LoadTexture(fileName.c_str());
}

/* Text */

inline __attribute__((always_inline)) Font
LoadFont(const std::string &fileName)
{
    return LoadFont(fileName.c_str());
}

inline __attribute__((always_inline)) Font
LoadFontEx(const std::string &fileName, int fontSize, int *fontChars,
           int glyphCount)
{
    return LoadFontEx(fileName.c_str(), fontSize, fontChars, glyphCount);
}

inline __attribute__((always_inline)) Font
LoadFontFromMemory(const std::string &fileType, const unsigned char *fileData,
                   int dataSize, int fontSize, int *fontChars, int glyphCount)
{
    return LoadFontFromMemory(fileType.c_str(), fileData, dataSize, fontSize,
                              fontChars, glyphCount);
}

inline __attribute__((always_inline)) void
DrawText(const std::string &text, int posX, int posY, int fontSize, Color color)
{
    DrawText(text.c_str(), posX, posY, fontSize, color);
}

inline __attribute__((always_inline)) void
DrawTextEx(Font font, const std::string &text, Vector2 position, float fontSize,
           float spacing, Color tint)
{
    DrawTextEx(font, text.c_str(), position, fontSize, spacing, tint);
}

inline __attribute__((always_inline)) void
DrawTextPro(Font font, const std::string &text, Vector2 position,
            Vector2 origin, float rotation, float fontSize, float spacing,
            Color tint)
{
    DrawTextPro(font, text.c_str(), position, origin, rotation, fontSize,
                spacing, tint);
}

inline __attribute__((always_inline)) int
MeasureText(const std::string &text, int fontSize)
{
    return MeasureText(text.c_str(), fontSize);
}

inline __attribute__((always_inline)) Vector2
MeasureTextEx(Font font, const std::string &text, float fontSize, float spacing)
{
    return MeasureTextEx(font, text.c_str(), fontSize, spacing);
}

inline __attribute__((always_inline)) int*
LoadCodepoints(const std::string &text, int *count)
{
    return LoadCodepoints(text.c_str(), count);
}

inline __attribute__((always_inline)) int
GetCodepointCount(const std::string &text)
{
    return GetCodepointCount(text.c_str());
}

inline __attribute__((always_inline)) int
GetCodepoint(const std::string &text, int *bytesProcessed)
{
    return GetCodepoint(text.c_str(), bytesProcessed);
}

/* Models */

inline __attribute__((always_inline)) Model
LoadModel(const std::string &fileName)
{
    return LoadModel(fileName.c_str());
}

inline __attribute__((always_inline)) bool
ExportMesh(Mesh mesh, const std::string &fileName)
{
    return ExportMesh(mesh, fileName.c_str());
}

inline __attribute__((always_inline)) Material*
LoadMaterials(const std::string &fileName, int *materialCount)
{
    return LoadMaterials(fileName.c_str(), materialCount);
}

inline __attribute__((always_inline)) ModelAnimation*
LoadModelAnimations(const std::string &fileName, unsigned int *animCount)
{
    return LoadModelAnimations(fileName.c_str(), animCount);
}

/* Audio */

inline __attribute__((always_inline)) Wave
LoadWave(const std::string &fileName)
{
    return LoadWave(fileName.c_str());
}

inline __attribute__((always_inline)) Wave
LoadWaveFromMemory(const std::string &fileType, const unsigned char *fileData,
                   int dataSize)
{
    return LoadWaveFromMemory(fileType.c_str(), fileData, dataSize);
}

inline __attribute__((always_inline)) Sound
LoadSound(const std::string &fileName)
{
    return LoadSound(fileName.c_str());
}

inline __attribute__((always_inline)) bool
ExportWave(Wave wave, const std::string &fileName)
{
    return ExportWave(wave, fileName.c_str());
}

inline __attribute__((always_inline)) bool
ExportWaveAsCode(Wave wave, const std::string &fileName)
{
    return ExportWaveAsCode(wave, fileName.c_str());
}

inline __attribute__((always_inline)) Music
LoadMusicStream(const std::string &fileName)
{
    return LoadMusicStream(fileName.c_str());
}

inline __attribute__((always_inline)) Music
LoadMusicStreamFromMemory(const std::string &fileType, unsigned char *data,
                          int dataSize)
{
    return LoadMusicStreamFromMemory(fileType.c_str(), data, dataSize);
}

#endif // RAYLIB_CPP_HPP
