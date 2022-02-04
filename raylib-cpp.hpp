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

#endif // RAYLIB_CPP_HPP
