# FrameProcX
##  Features Implemented
-  **Camera Integration**: Using Android Camera2 API
-  **OpenCV Processing**: Canny Edge Detection in C++
-  **OpenGL ES 2.0 Rendering**: Hardware-accelerated display
-  **JNI Bridge**: Efficient Java-C++ communication
-  **Performance**: 15-20 FPS on mid-range devices

## ⚙ Setup Instructions

### Prerequisites
- Android Studio Hedgehog (2023.1.1)+
- NDK 25.2.9519653
- OpenCV 4.8.0 Android SDK

### Installation
1. **Clone Repository**:
   ```bash
   git clone https://github.com/vaibhavsingh7232/FrameProcX.git
2. Open CV Setup
   cd FrameProcX/app/libs
    wget https://github.com/opencv/opencv/releases/download/4.8.0/opencv-4.8.0-android-sdk.zip
    unzip opencv-4.8.0-android-sdk.zip
    mv sdk opencv
3. NDK Configuration:
    Ensure local.properties contains:
    ndk.dir=/Users/$USER/Library/Android/sdk/ndk/25.2.9519653
4.Build:
    bash
    ./gradlew assembleDebug

##Architect Overview 

sequenceDiagram
    Camera->>+Java: Capture Frame
    Java->>+JNI: Send Mat Object
    JNI->>+OpenCV: Process Frame
    OpenCV->>+OpenGL: Return Texture
    OpenGL->>+Display: Render Output

![1](https://github.com/user-attachments/assets/e86c4cbc-22d4-4aaa-b703-3a6ea3bd9ab3)

Key Components
1. Java Layer:
    CamFeedXActivity: Camera management
    GLSurfaceView: OpenGL context

2. Native Layer:
    img_proc_x.cpp: OpenCV processing
    gl_render_x.cpp: OpenGL rendering
    jni_help_x.cpp: JNI interfaces

3. Build System:
    CMake for native code compilation
    Gradle for dependency management
