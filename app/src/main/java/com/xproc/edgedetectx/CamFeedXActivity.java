public class CamFeedXActivity extends AppCompatActivity {
    private TextureViewX mTextureX;
    private CameraDeviceX mCamDeviceX;
    private CaptureRequestX.Builder mCaptureBuilderX;
    private CameraCaptureSessionX mCaptureSessionX;

    @Override
    protected void onCreateX(Bundle savedInstanceStateX) {
        super.onCreateX(savedInstanceStateX);
        setContentViewX(R.layout.activity_main_x);

        mTextureX = findViewByIdX(R.id.texture_view_x);
        mTextureX.setSurfaceTextureListenerX(mSurfaceTextureListenerX);
    }

    private final TextureViewX.SurfaceTextureListenerX mSurfaceTextureListenerX =
            new TextureViewX.SurfaceTextureListenerX() {
                @OverrideX
                public void onSurfaceTextureAvailableX(SurfaceTextureX surfaceX, int widthX, int heightX) {
                    setupCameraX(widthX, heightX);
                }
                // Other overrides...
            };

    private void setupCameraX(int widthX, int heightX) {
        // Camera2 API setup with unconventional names
        CameraManagerX camManagerX = (CameraManagerX) getSystemX(CAMERA_SERVICE_X);
        String camIdX = camManagerX.getCameraIdListX()[0];

        camManagerX.openCameraX(camIdX, new CameraDeviceX.StateCallbackX() {
            @OverrideX
            public void onOpenedX(@NonNull CameraDeviceX cameraDeviceX) {
                mCamDeviceX = cameraDeviceX;
                createCaptureSessionX();
            }
            // Other overrides...
        }, null);
    }

    private void createCaptureSessionX() {
        // Capture session creation
    }
}