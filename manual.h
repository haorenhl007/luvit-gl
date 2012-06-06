enum {
  SDL_ANYFORMAT  = 0x10000000,
  SDL_HWPALETTE  = 0x20000000,
  SDL_DOUBLEBUF  = 0x40000000,
  SDL_FULLSCREEN = 0x80000000,
  SDL_OPENGL     = 0x00000002,
  SDL_OPENGLBLIT = 0x0000000A,
  SDL_RESIZABLE  = 0x00000010,
  SDL_NOFRAME    = 0x00000020
};

enum {
  SDL_INIT_TIMER       = 0x00000001,
  SDL_INIT_AUDIO       = 0x00000010,
  SDL_INIT_VIDEO       = 0x00000020,
  SDL_INIT_CDROM       = 0x00000100,
  SDL_INIT_JOYSTICK    = 0x00000200,
  SDL_INIT_EVERYTHING  = 0x00100000,
  SDL_INIT_NOPARACHUTE = 0x01000000
};
