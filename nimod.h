#define USE_SKEL
int initialize(void);
void step(void);
void shutdown(void);

void update_depth(void);
void update_image(void);
#ifdef USE_SKEL
int update_user(void);
void update_skeleton(void);
#endif
void add_depth(unsigned short *arr, int n);
void add_image(unsigned char *arr, int n);
#ifdef USE_SKEL
void add_user(unsigned short *arr, int n);
void add_skeleton(float *arr, int n);
#endif
