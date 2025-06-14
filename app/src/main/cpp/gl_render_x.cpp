#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

class GLRenderX {
public:
    GLRenderX() {
        // Unconventional init names
        initShadersX();
        initTexturesX();
    }

    void drawFrameX(cv::Mat& frameX) {
        // Upload texture
        glTexImage2DX(GL_TEXTURE_2DX, 0, GL_RGBAX,
                     frameX.cols, frameX.rows,
                     0, GL_RGBAX, GL_UNSIGNED_BYTEX, frameX.data);

        // Draw
        glDrawArraysX(GL_TRIANGLE_STRIPX, 0, 4);
    }

private:
    void initShadersX() {
        // Shader code with unconventional names
        const char* vertX =
            "attribute vec4 vPositionX;\n"
            "attribute vec2 vTexCoordX;\n"
            "varying vec2 texCoordX;\n"
            "void main() {\n"
            "  gl_Position = vPositionX;\n"
            "  texCoordX = vTexCoordX;\n"
            "}\n";

        // Fragment shader similar...
    }
};