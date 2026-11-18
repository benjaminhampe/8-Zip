#include <de/image/Image.h>

namespace de
{

// static
std::string PixelFormat::getString( int const fmt )
{
    switch (fmt)
    {
    case PixelFormat::R8G8B8A8 : return "R8G8B8A8";
    case PixelFormat::R8G8B8   : return "R8G8B8";
    case PixelFormat::R5G6B5   : return "R5G6B5";
    case PixelFormat::R5G5B5A1 : return "R5G5B5A1";
    case PixelFormat::R8       : return "R8";
    case PixelFormat::R16      : return "R16";
    case PixelFormat::R24      : return "R24";
    case PixelFormat::R32      : return "R32";
    case PixelFormat::R32F     : return "R32F";
    //case PixelFormat::R32FG32FB32F : return "R32FG32FB32F";
    case PixelFormat::RGB16F  : return "RGB16F";
    case PixelFormat::RGBA16F : return "RGBA16F";
    case PixelFormat::RGB32F  : return "RGB32F";
    case PixelFormat::RGBA32F : return "RGBA32F";

    case PixelFormat::A1R5G5B5 : return "A1R5G5B5";
    case PixelFormat::B8G8R8A8 : return "B8G8R8A8";
    case PixelFormat::B8G8R8   : return "B8G8R8";
    case PixelFormat::D24S8    : return "D24S8";
    case PixelFormat::D32F     : return "D32F";
    case PixelFormat::D32FS8   : return "D32FS8";
    case PixelFormat::S8       : return "S8";
    default                    : return "Unknown"; // Auto
    }
}

// static
uint32_t PixelFormat::getBitsPerPixel( int const fmt )
{
    switch (fmt)
    {
    case PixelFormat::R8G8B8A8 : return 32;
    case PixelFormat::R8G8B8   : return 24;
    case PixelFormat::R5G6B5   : return 16;
    case PixelFormat::R5G5B5A1 : return 16;
    case PixelFormat::R8       : return 8;
    case PixelFormat::R16      : return 16;
    case PixelFormat::R24      : return 24;
    case PixelFormat::R32      : return 32;
    case PixelFormat::R32F     : return 32;
    case PixelFormat::RGB32F   : return 96;
    case PixelFormat::RGBA32F  : return 128;
    case PixelFormat::RGB16F   : return 48;
    case PixelFormat::RGBA16F  : return 64;
    case PixelFormat::A1R5G5B5 : return 16;
    case PixelFormat::B8G8R8A8 : return 32;
    case PixelFormat::B8G8R8   : return 24;
    case PixelFormat::D24S8    : return 32;
    case PixelFormat::D32F     : return 32;
    case PixelFormat::D32FS8   : return 40;
    case PixelFormat::S8       : return 8;
    default                    : return 0;
    }
}

// static
uint32_t PixelFormat::getBytesPerPixel( int const fmt )
{
    return getBitsPerPixel(fmt) / 8;
}

// static
uint32_t PixelFormat::getChannelCount( int const fmt )
{
    switch (fmt)
    {
    case PixelFormat::R8G8B8A8  : return 4;
    case PixelFormat::R8G8B8    : return 3;
    case PixelFormat::R5G6B5    : return 3;
    case PixelFormat::R5G5B5A1  : return 4;
    case PixelFormat::R8        : return 1;
    case PixelFormat::R16       : return 1;
    case PixelFormat::R24       : return 1;
    case PixelFormat::R32       : return 1;
    case PixelFormat::R32F      : return 1;
    //case PixelFormat::R32FG32FB32F   : return 3;
    case PixelFormat::RGB16F    : return 3;
    case PixelFormat::RGBA16F   : return 4;
    case PixelFormat::RGB32F    : return 3;
    case PixelFormat::RGBA32F   : return 4;
    case PixelFormat::A1R5G5B5  : return 4;
    case PixelFormat::B8G8R8A8  : return 4;
    case PixelFormat::B8G8R8    : return 3;
    case PixelFormat::D24S8     : return 2;
    case PixelFormat::D32F      : return 1;
    case PixelFormat::D32FS8    : return 2;
    case PixelFormat::S8        : return 1;
    default                     : return 0;
    }
}

// static
uint8_t PixelFormat::getRedBits( int const fmt )
{
    switch (fmt)
    {
    case PixelFormat::R8G8B8A8  : return 8;
    case PixelFormat::R8G8B8    : return 8;
    case PixelFormat::R5G6B5    : return 5;
    case PixelFormat::R5G5B5A1  : return 5;
    case PixelFormat::R8        : return 8;
    case PixelFormat::R16       : return 16;
    case PixelFormat::R24       : return 24;
    case PixelFormat::R32       : return 32;
    case PixelFormat::R32F      : return 32;
        //case PixelFormat::R32FG32FB32F : return 32;
    case PixelFormat::RGB16F    : return 16;
    case PixelFormat::RGBA16F   : return 16;
    case PixelFormat::RGB32F    : return 32;
    case PixelFormat::RGBA32F   : return 32;
    case PixelFormat::A1R5G5B5  : return 5;
    case PixelFormat::B8G8R8A8  : return 8;
    case PixelFormat::B8G8R8    : return 8;
    default: return 0;
    }
}

// static
uint8_t PixelFormat::getGreenBits( int const fmt )
{
    switch (fmt)
    {
    case PixelFormat::R8G8B8A8  : return 8;
    case PixelFormat::R8G8B8    : return 8;
    case PixelFormat::R5G6B5    : return 6;
    case PixelFormat::R5G5B5A1  : return 5;
        //case PixelFormat::R32FG32FB32F : return 32;
    case PixelFormat::RGB16F    : return 16;
    case PixelFormat::RGBA16F   : return 16;
    case PixelFormat::RGB32F    : return 32;
    case PixelFormat::RGBA32F   : return 32;
    case PixelFormat::A1R5G5B5  : return 5;
    case PixelFormat::B8G8R8A8  : return 8;
    case PixelFormat::B8G8R8    : return 8;
    default: return 0;
    }
}

// static
uint8_t PixelFormat::getBlueBits( int const fmt )
{
    switch (fmt)
    {
    case PixelFormat::R8G8B8A8  : return 8;
    case PixelFormat::R8G8B8    : return 8;
    case PixelFormat::R5G6B5    : return 5;
    case PixelFormat::R5G5B5A1  : return 5;
        //case PixelFormat::R32FG32FB32F : return 32;
    case PixelFormat::RGB16F    : return 16;
    case PixelFormat::RGBA16F   : return 16;
    case PixelFormat::RGB32F    : return 32;
    case PixelFormat::RGBA32F   : return 32;
    case PixelFormat::A1R5G5B5  : return 5;
    case PixelFormat::B8G8R8A8  : return 8;
    case PixelFormat::B8G8R8    : return 8;
    default: return 0;
    }
}

// static
uint8_t PixelFormat::getAlphaBits( int const fmt )
{
    switch (fmt)
    {
    case PixelFormat::R8G8B8A8  : return 8;
    case PixelFormat::R5G5B5A1  : return 1;
    case PixelFormat::A1R5G5B5  : return 1;
    case PixelFormat::B8G8R8A8  : return 8;
    case PixelFormat::RGBA16F   : return 16; // New
    case PixelFormat::RGBA32F   : return 32; // New
    default                     : return 0;
    }
}

// static
uint8_t PixelFormat::getDepthBits( int const fmt )
{
    switch (fmt)
    {
    case PixelFormat::D24S8 : return 24;
    case PixelFormat::D32F : return 32;
    case PixelFormat::D32FS8 : return 32;
    default: return 0;
    }
}

// static
uint8_t PixelFormat::getStencilBits( int const fmt )
{
    switch (fmt)
    {
    case PixelFormat::D24S8 : return 8;
    case PixelFormat::D32FS8 : return 8;
    case PixelFormat::S8     : return 8;
    default: return 0;
    }
}

// static
PixelFormatConverter::Converter_t
PixelFormatConverter::getConverter( PixelFormat const & src, PixelFormat const & dst )
{
    if ( src == PixelFormat::R32F )
    {
             if ( dst == PixelFormat::R8G8B8A8 ){ return convert_R32F_to_RGBA_8888; }
        else if ( dst == PixelFormat::R8G8B8 )  { return convert_R32F_to_RGB_888; }
        else if ( dst == PixelFormat::R8 )      { return convert_R32F_to_R8; }
        else if ( dst == PixelFormat::R32F )    { return convert_R32F_to_R32F; }
        else                                    { throw std::runtime_error( "No convert_R32F" ); return nullptr; }
    }
    else if ( src == PixelFormat::RGB32F )
    {
             if ( dst == PixelFormat::R8G8B8A8 ){ return convert_RGB32F_to_RGBA_8888; }
        else if ( dst == PixelFormat::R8G8B8 )  { return convert_RGB32F_to_RGB_888; }
        else if ( dst == PixelFormat::R8 )      { return convert_RGB32F_to_R8; }
        else if ( dst == PixelFormat::R32F )    { return convert_RGB32F_to_RGB_888; }
        else                                    { throw std::runtime_error( "No convert_RGB32F" ); return nullptr; }
    }
    else if ( src == PixelFormat::RGBA32F )
    {
        if ( dst == PixelFormat::R32F )         { return convert_RGBA32F_to_R32F; }
        if ( dst == PixelFormat::R8 )           { return convert_RGBA32F_to_R8; }
        else                                    { throw std::runtime_error( "No convert_RGBA32F" ); return nullptr; }
    }
    else if ( src == PixelFormat::R8G8B8A8 )
   {
           if ( dst == PixelFormat::R8G8B8A8 )  { return convert_R8G8B8A8_to_R8G8B8A8; }
      else if ( dst == PixelFormat::R8G8B8 )    { return convert_R8G8B8A8_to_R8G8B8; }
      else if ( dst == PixelFormat::R8 )        { return convert_R8G8B8A8_to_R8; }
      else if ( dst == PixelFormat::R5G5B5A1 )  { throw std::runtime_error( "No convert_R8G8B8A8_to_R5G5B5A1" ); return nullptr; }
      else if ( dst == PixelFormat::R5G6B5 )    { throw std::runtime_error( "No convert_R8G8B8A8_to_R5G6B5" ); return nullptr;   }
      else if ( dst == PixelFormat::B8G8R8 )    { return convert_R8G8B8A8_to_B8G8R8; }
   }
   else if ( src == PixelFormat::R8G8B8 )
   {
           if ( dst == PixelFormat::R8G8B8A8 )  { return convert_RGB_24_to_RGBA_32; } // BUG_2025_05_11 return convert_R8G8B8_to_R8G8B8A8; }
      else if ( dst == PixelFormat::R8G8B8 )    { return convert_RGB24_to_RGB24; }
      else if ( dst == PixelFormat::R8 )        { return convert_R8G8B8_to_R8; }
      else if ( dst == PixelFormat::R5G5B5A1 )  { throw std::runtime_error( "No convert_R8G8B8_to_R5G5B5A1" ); return nullptr; }
      else if ( dst == PixelFormat::R5G6B5 )    { throw std::runtime_error( "No convert_R8G8B8_to_R5G6B5" ); return nullptr; }
      else if ( dst == PixelFormat::B8G8R8 )    { return convert_R8G8B8_to_B8G8R8; }
   }
   else if ( src == PixelFormat::R5G5B5A1 )
   {
           if ( dst == PixelFormat::R8G8B8A8 )  { return convert_R5G5B5A1_to_R8G8B8A8; }
      else if ( dst == PixelFormat::R8G8B8 )    { return convert_R5G5B5A1_to_R8G8B8;   }
      else if ( dst == PixelFormat::R8 )        { return convert_R5G5B5A1_to_R8;   }
      else if ( dst == PixelFormat::R5G5B5A1 )  { return convert_R5G5B5A1_to_R5G5B5A1; }
      else if ( dst == PixelFormat::R5G6B5 )    { throw std::runtime_error( "No convert_R5G5B5A1_to_R5G6B5" ); return nullptr; }
      else if ( dst == PixelFormat::B8G8R8 )    { return convert_R5G5B5A1_to_B8G8R8;   }
   }
   else if ( src == PixelFormat::R5G6B5 )
   {
           if ( dst == PixelFormat::R8G8B8A8 )  { return convert_R5G6B5_to_R8G8B8A8; }
      else if ( dst == PixelFormat::R8G8B8 )    { return convert_R5G6B5_to_R8G8B8; }
      else if ( dst == PixelFormat::R8 )        { return convert_R5G6B5_to_R8; }
      else if ( dst == PixelFormat::R5G5B5A1 )  { return convert_R5G6B5_to_R5G5B5A1; }
      else if ( dst == PixelFormat::R5G6B5 )    { throw std::runtime_error( "No convert_R5G6B5_to_R5G6B5" ); return nullptr; }
      else if ( dst == PixelFormat::B8G8R8 )    { return convert_R5G6B5_to_B8G8R8; }
   }
   else if ( src == PixelFormat::B8G8R8 )
   {
           if ( dst == PixelFormat::R8G8B8A8 )  { return convert_B8G8R8_to_R8G8B8A8; }
      else if ( dst == PixelFormat::R8G8B8 )    { return convert_B8G8R8_to_R8G8B8;   }
      else if ( dst == PixelFormat::R8 )        { return convert_B8G8R8_to_R8;   }
      else                                      { throw std::runtime_error( "No convert_B8G8R8_to_Fancy" ); }
   }
   else if ( src == PixelFormat::B8G8R8A8 )
   {
           if ( dst == PixelFormat::R8G8B8A8 )  { return convert_B8G8R8A8_to_R8G8B8A8; }
      else if ( dst == PixelFormat::R8G8B8 )    { throw std::runtime_error( "No convert_B8G8R8A8_to_R8G8B8" ); }
      else if ( dst == PixelFormat::R8 )        { return convert_B8G8R8A8_to_R8; }
      else                                      { throw std::runtime_error( "No convert_B8G8R8A8_to_Fancy" ); }
   }
   else
   {
      std::ostringstream o;
      o << "Unknown color converter from (" << src.str() << ") _to_ (" << dst.str() << ")";
      throw std::runtime_error( o.str() );
   }
   return nullptr;
}

// static
void PixelFormatConverter::convert_RGB24_to_RGB24( void const * src, void* dst, size_t n )
{
    size_t nBytes = n * sizeof(uint8_t) * 3;
    ::memcpy( dst, src, nBytes );
}

// static
/*
void
PixelFormatConverter::convert_R8G8B8_to_R8G8B8( void const * src, void* dst, size_t n )
{
   ::memcpy( dst, src, n * 3 );
}
*/

// static
void PixelFormatConverter::convert_R8G8B8A8_to_R8G8B8( void const * src, void* dst, size_t n )
{
   uint8_t* s = (uint8_t*)src;
   uint8_t* d = (uint8_t*)dst;
   for ( size_t i = 0; i < n; ++i )
   {
      d[0] = s[0];
      d[1] = s[1];
      d[2] = s[2];
      s += 4; // source[3] is alpha, jumps over A.
      d += 3;
   }
}

// static
void PixelFormatConverter::convert_R5G6B5_to_R8G8B8( void const * src, void* dst, size_t n )
{
   uint16_t* s = (uint16_t*)src;
   uint8_t * d = (uint8_t *)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      d[2] = (*s & 0xf800) >> 8;
      d[1] = (*s & 0x07e0) >> 3;
      d[0] = (*s & 0x001f) << 3;
      s += 1; // += 2 Byte
      d += 3; // += 3 Byte
   }
}

// static
void PixelFormatConverter::convert_R5G6B5_to_R8G8B8A8( void const * src, void* dst, size_t n )
{
   uint16_t* s = (uint16_t*)src;
   uint8_t * d = (uint8_t *)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      d[3] = 255;
      d[2] = (*s & 0xf800) >> 8;
      d[1] = (*s & 0x07e0) >> 3;
      d[0] = (*s & 0x001f) << 3;
      s += 1;
      d += 4;
   }
}

// static
void PixelFormatConverter::convert_R5G5B5A1_to_R8G8B8( void const * src, void* dst, size_t n )
{
   uint16_t* s = (uint16_t*)src;
   uint8_t*  d = (uint8_t*)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      d[2] = (*s & 0x7c00) >> 7;
      d[1] = (*s & 0x03e0) >> 2;
      d[0] = (*s & 0x1f) << 3;
      s += 1;
      d += 3;
   }
}

// static
void PixelFormatConverter::convert_R8G8B8A8_to_R8G8B8A8( void const * src, void* dst, size_t n )
{
   ::memcpy( dst, src, n * 4 );
}

// static
uint32_t
PixelFormatConverter::R5G5B5A1_to_R8G8B8A8( uint16_t color )
{
   return (( -( (int32_t) color & 0x00008000 ) >> (int32_t) 31 ) & 0xFF000000 )
        | (( color & 0x00007C00 ) << 9) | (( color & 0x00007000 ) << 4)
        | (( color & 0x000003E0 ) << 6) | (( color & 0x00000380 ) << 1)
        | (( color & 0x0000001F ) << 3) | (( color & 0x0000001C ) >> 2);
}

// static
void PixelFormatConverter::convert_R5G5B5A1_to_R8G8B8A8( void const * src, void* dst, size_t n )
{
   uint16_t* s = (uint16_t*)src;
   uint32_t* d = (uint32_t*)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      *d++ = R5G5B5A1_to_R8G8B8A8(*s++);
   }
}

// static
void PixelFormatConverter::convert_R5G5B5A1_to_R5G5B5A1( void const * src, void* dst, size_t n )
{
   ::memcpy( dst, src, n * 2 );
}

/*
// static
void PixelFormatConverter::convert_R8G8B8_to_R8G8B8A8( void const * src, void* dst, size_t n )
{
   uint8_t* s = (uint8_t*)src;
   uint8_t* d = (uint8_t*)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      d[0] = s[0];
      d[1] = s[1];
      d[2] = s[2];
      d[3] = 255;
      s += 3;
      d += 4;
   }
}
*/
// static
void PixelFormatConverter::convert_RGB_24_to_RGBA_32( void const * src, void* dst, size_t n )
{
    uint8_t* pSrc = (uint8_t*)src;
    uint32_t* pDst = (uint32_t*)dst;

    for ( size_t i = 0; i < n; ++i )
    {
        uint8_t r = *pSrc++;
        uint8_t g = *pSrc++;
        uint8_t b = *pSrc++;
        *pDst++ = dbRGB(r,g,b);
    }
}

// static
uint16_t
PixelFormatConverter::R5G6B5_to_R5G5B5A1( uint16_t color ) // Returns A1R5G5B5 Color from R5G6B5 color
{
   return 0x8000 | ( ( ( color & 0xFFC0 ) >> 1 ) | ( color & 0x1F ) );
}

// Used in: ImageWriterTGA

// static
void PixelFormatConverter::convert_R5G6B5_to_R5G5B5A1( void const * src, void* dst, size_t n )
{
   uint16_t* s = (uint16_t*)src;
   uint16_t* d = (uint16_t*)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      *d++ = R5G6B5_to_R5G5B5A1( *s++ );
   }
}

// Used in: ImageWriterBMP

// static
void PixelFormatConverter::convert24Bit_to_24Bit( uint8_t const * in, uint8_t* out, int32_t width, int32_t height, int32_t linepad, bool flip, bool bgr )
{
   if ( !in || !out ) return;
   int32_t const lineWidth = 3 * width;
   if ( flip )
   {
      out += lineWidth * height;
   }

   for ( int32_t y = 0; y < height; ++y )
   {
      if ( flip )
      {
         out -= lineWidth;
      }
      if ( bgr )
      {
         for ( int32_t x = 0; x < lineWidth; x += 3 )
         {
            out[ x+0 ] = in[ x+2 ];
            out[ x+1 ] = in[ x+1 ];
            out[ x+2 ] = in[ x+0 ];
         }
      }
      else
      {
         ::memcpy( out, in, lineWidth );
      }
      if ( !flip )
      {
         out += lineWidth;
      }
      in += lineWidth;
      in += linepad;
   }
}

// Used in: ImageWriterBMP

// static
void PixelFormatConverter::convert_R8G8B8A8_to_B8G8R8( void const * src, void* dst, size_t n )
{
   uint8_t const* s = (uint8_t const*)src;
   uint8_t* d = (uint8_t*)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      d[0] = s[2];
      d[1] = s[1];
      d[2] = s[0];
      s += 4; // s[3] is alpha and skipped, jumped over.
      d += 3;
   }
}

// static
void PixelFormatConverter::convert_R8G8B8_to_B8G8R8( void const * src, void* dst, size_t n )
{
   uint8_t const* s = (uint8_t const*)src;
   uint8_t* d = (uint8_t*)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      d[0] = s[2];
      d[1] = s[1];
      d[2] = s[0];
      s += 3;
      d += 3;
   }
}


// static
void PixelFormatConverter::convert_B8G8R8_to_R8G8B8( void const * src, void* dst, size_t n )
{
   convert_R8G8B8_to_B8G8R8( src, dst, n );
}

// static
void PixelFormatConverter::convert_R8G8B8A8_to_B8G8R8A8( void const * src, void* dst, size_t n )
{
   uint8_t const* s = (uint8_t const*)src;
   uint8_t* d = (uint8_t*)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      d[0] = s[2];
      d[1] = s[1];
      d[2] = s[0];
      d[3] = s[3];
      s += 4;
      d += 4;
   }
}

// static
void PixelFormatConverter::convert_B8G8R8A8_to_R8G8B8A8( void const * src, void* dst, size_t n )
{
   convert_R8G8B8A8_to_B8G8R8A8( src, dst, n );
}

// static
void PixelFormatConverter::convert_R5G5B5A1_to_B8G8R8( void const * src, void* dst, size_t n )
{
   uint16_t const* s = (uint16_t const*)src;
   uint8_t* d = (uint8_t*)dst;

   for ( size_t i = 0; i < n; ++i )
   {
      d[0] = (*s & 0x7c00) >> 7;
      d[1] = (*s & 0x03e0) >> 2;
      d[2] = (*s & 0x1f) << 3;
      s += 1;
      d += 3;
   }
}

// static
void PixelFormatConverter::convert_R5G6B5_to_B8G8R8( void const * src, void* dst, size_t n )
{
   uint16_t const* s = (uint16_t const*)src;
   uint8_t* d = (uint8_t*)dst;
   for ( size_t i = 0; i < n; ++i )
   {
      d[0] = (*s & 0xf800) >> 8;
      d[1] = (*s & 0x07e0) >> 3;
      d[2] = (*s & 0x001f) << 3;
      s += 1;
      d += 3;
   }
}



// static
void PixelFormatConverter::convert_R8G8B8_to_B8G8R8A8( void const * src, void* dst, size_t n )
{
   uint8_t const* s = (uint8_t const*)src;
   uint8_t* d = (uint8_t*)dst;
   for ( size_t i = 0; i < n; ++i )
   {
      d[0] = s[2];
      d[1] = s[1];
      d[2] = s[0];
      d[3] = 255;
      s += 3;
      d += 4;
   }
}


// used in bmp format
// static
void PixelFormatConverter::convert_B8G8R8_to_R8G8B8A8( void const * src, void* dst, size_t n )
{
   uint8_t const* s = (uint8_t const*)src;
   uint8_t* d = (uint8_t*)dst;
   for ( size_t i = 0; i < n; ++i )
   {
      d[0] = s[2];   // B <= B
      d[1] = s[1];   // G <= G
      d[2] = s[0];   // R <= R
      d[3] = 255;    // A = 255
      s += 3;
      d += 4;
   }
}

// used in HDR exr format
// static
void PixelFormatConverter::convert_R32F_to_R32F( void const * src, void* dst, size_t n )
{
    ::memcpy( dst, src, n * sizeof(float) );
}

// used in HDR exr format
// static
void PixelFormatConverter::convert_R32F_to_RGB_888( void const * src, void* dst, size_t n )
{
    float const* s = (float const*)src;
    uint8_t* d = (uint8_t*)dst;
    for ( size_t i = 0; i < n; ++i )
    {
        uint8_t r = static_cast<uint8_t>(std::clamp( int(std::lround(s[0] * 255.0f)), 0, 255));
        d[0] = r;
        d[1] = r;
        d[2] = r;
        s += 1;
        d += 3;
    }
}

// used in HDR exr format
// static
void PixelFormatConverter::convert_R32F_to_RGBA_8888( void const * src, void* dst, size_t n )
{
    auto s = reinterpret_cast<float const*>(src);
    auto d = reinterpret_cast<uint8_t*>(dst);
    for ( size_t i = 0; i < n; ++i )
    {
        uint8_t r = static_cast<uint8_t>(std::clamp( int(std::lround(s[0] * 255.0f)), 0, 255));
        d[0] = r;
        d[1] = r;
        d[2] = r;
        d[3] = 255;
        s += 1;
        d += 4;
    }
}

// used in HDR exr format
// static
void PixelFormatConverter::convert_RGB32F_to_RGB_888( void const * src, void* dst, size_t n )
{
    auto s = reinterpret_cast<float const*>(src);
    auto d = reinterpret_cast<uint8_t*>(dst);
    for ( size_t i = 0; i < n; ++i )
    {
        d[0] = static_cast<uint8_t>(std::clamp( std::lround(255.0f * s[0]), long(0), long(255)));
        d[1] = static_cast<uint8_t>(std::clamp( std::lround(255.0f * s[1]), long(0), long(255)));
        d[2] = static_cast<uint8_t>(std::clamp( std::lround(255.0f * s[2]), long(0), long(255)));
        s += 3;
        d += 3;
    }
}

// used in HDR exr format
// static
void PixelFormatConverter::convert_RGB32F_to_RGBA_8888( void const * src, void* dst, size_t n )
{
    float const* s = (float const*)src;
    uint8_t* d = (uint8_t*)dst;
    for ( size_t i = 0; i < n; ++i )
    {
        d[0] = std::clamp( int(std::lround(s[0] * 255.0f)), 0, 255);
        d[1] = std::clamp( int(std::lround(s[1] * 255.0f)), 0, 255);
        d[2] = std::clamp( int(std::lround(s[2] * 255.0f)), 0, 255);
        d[3] = 255;    // A = 255
        s += 3;
        d += 4;
    }
}

// used in HDR exr format
// static
void PixelFormatConverter::convert_RGB32F_to_R32F( void const * src, void* dst, size_t n )
{
    float const* s = reinterpret_cast<float const*>(src);
    float* d = reinterpret_cast<float*>(dst);
    for ( size_t i = 0; i < n; ++i )
    {
        *d = s[0];
        s += 3;
        d++;
    }
}

// used in HDR exr format
// static
void PixelFormatConverter::convert_RGBA32F_to_R32F( void const * src, void* dst, size_t n )
{
    float const* s = reinterpret_cast<float const*>(src);
    float* d = reinterpret_cast<float*>(dst);
    for ( size_t i = 0; i < n; ++i )
    {
        *d = s[0];
        s += 4;
        d++;
    }
}






// ===========================================================================
// ===========================================================================
// ===========================================================================

// static
void PixelFormatConverter::convert_R8G8B8A8_to_R8( void const * src, void* dst, size_t n )
{
    uint8_t const* s = (uint8_t const*)src;
    uint8_t* d = (uint8_t*)dst;

    for ( size_t i = 0; i < n; ++i )
    {
        *d = *s;
        s += 4;
        d++;
    }
}

// static
void PixelFormatConverter::convert_R8G8B8_to_R8( void const * src, void* dst, size_t n )
{
    uint8_t const* s = (uint8_t const*)src;
    uint8_t* d = (uint8_t*)dst;

    for ( size_t i = 0; i < n; ++i )
    {
        *d = *s;
        s += 3;
        d++;
    }
}

// static
void PixelFormatConverter::convert_B8G8R8_to_R8( void const * src, void* dst, size_t n )
{
    uint8_t const* s = (uint8_t const*)src;
    uint8_t* d = (uint8_t*)dst;

    for ( size_t i = 0; i < n; ++i )
    {
        *d = s[2];
        s += 3;
        d++;
    }
}

//static
void PixelFormatConverter::convert_B8G8R8A8_to_R8( void const * src, void* dst, size_t n )
{
    uint8_t const* s = (uint8_t const*)src;
    uint8_t* d = (uint8_t*)dst;

    for ( size_t i = 0; i < n; ++i )
    {
        *d = s[2];
        s += 4;
        d++;
    }
}

// static
void PixelFormatConverter::convert_R5G5B5A1_to_R8( void const * src, void* dst, size_t n )
{
    DE_ERROR("n = ", n)
}

// static
void PixelFormatConverter::convert_R5G6B5_to_R8( void const * src, void* dst, size_t n )
{
    DE_ERROR("n = ", n)
}

// static
void PixelFormatConverter::convert_R32F_to_R8( void const * src, void* dst, size_t n )
{
    float const* s = (float const*)src;
    uint8_t* d = (uint8_t*)dst;

    for ( size_t i = 0; i < n; ++i )
    {
        float r = *s;
        s++;
        *d = static_cast<uint8_t>( std::clamp( std::lround(r*255.0f), 0l, 255l ) );
        d++;
    }
}

// static
void PixelFormatConverter::convert_RGB32F_to_R8( void const * src, void* dst, size_t n )
{
    float const* s = (float const*)src;
    uint8_t* d = (uint8_t*)dst;

    for ( size_t i = 0; i < n; ++i )
    {
        float r = *s;
        s += 3;
        *d = static_cast<uint8_t>( std::clamp( std::lround(r*255.0f), 0l, 255l ) );
        d++;
    }
}

// static
void PixelFormatConverter::convert_RGBA32F_to_R8( void const * src, void* dst, size_t n )
{
    float const* s = (float const*)src;
    uint8_t* d = (uint8_t*)dst;

    for ( size_t i = 0; i < n; ++i )
    {
        float r = *s;
        s += 4;
        *d = static_cast<uint8_t>( std::clamp( std::lround(r*255.0f), 0l, 255l ) );
        d++;
    }
}


// ===========================================================================
// ===   constructor
// ===========================================================================

Image::Image()
   : m_width( 0 )
   , m_height( 0 )
   , m_pixelFormat( PixelFormat::R8G8B8A8 )
   , m_debug( false )
   , m_bytesPerPixel(0)
{
    //DE_DEBUG("w(",w,"), h(",h,"), pixelCount(",pixelCount,")")
}

Image::Image( int32_t w, int32_t h, PixelFormat fmt )
   : m_width( w )
   , m_height( h )
   , m_pixelFormat( fmt )
   , m_debug( false )
   , m_bytesPerPixel(PixelFormat::getBytesPerPixel( fmt ))
{
    const uint64_t byteCount = uint64_t( w ) * uint64_t( h ) * m_bytesPerPixel;
    m_data.resize( byteCount, 0x00 );
}

Image::Image( int32_t w, int32_t h, uint32_t fillColor, PixelFormat fmt )
   : m_width( w )
   , m_height( h )
   , m_pixelFormat( fmt )
   , m_debug( false )
   , m_bytesPerPixel( PixelFormat::getBytesPerPixel(fmt) )
{
   const uint64_t byteCount = uint64_t( w ) * uint64_t( h ) * m_bytesPerPixel;
   m_data.resize( byteCount, 0x00 );
   fill( fillColor );
}

bool
Image::equals( const Image& other ) const
{
   if ( w() != other.w() ) return false;
   if ( h() != other.h() ) return false;
   if ( pixelFormat() != other.pixelFormat() ) return false;

   return 0 == memcmp( data(), other.data(), other.size() );
}

bool
Image::empty() const
{
    if ( w() < 1 ) { return true; }
    if ( h() < 1 ) { return true; }
    if ( byteCount() > m_data.size() ) { return true; }
    return false;
}

void
Image::clear( bool forceShrink )
{
    m_data.clear();
    if ( forceShrink )
    {
        m_data.shrink_to_fit(); // here it actually frees memory, could be heavy load.
    }

    m_width = 0;
    m_height = 0;
    // Dont touch format
    // Dont touch uri string
}

void
Image::setPixelFormat( PixelFormat pixelFormat )
{
    m_pixelFormat = pixelFormat;
    m_bytesPerPixel = PixelFormat::getBytesPerPixel( m_pixelFormat );
    if (m_bytesPerPixel < 1)
    {
        DE_WARN("Got invalid bpp for format ", pixelFormat.str())
    }
}

void
Image::setPixel( int32_t x, int32_t y, uint32_t color, bool blend )
{
    if ( m_width < 1 || m_height < 1 )
    {
        DE_ERROR("Empty image")
        return;
    }

    if ( x < 0 || x >= m_width )
    {
        //DE_ERROR("Invalid x = ", x)
        return;
    }

    if ( y < 0 || y >= m_height )
    {
        //DE_ERROR("Invalid y = ", y)
        return;
    }

    uint64_t byteOffset = uint64_t( m_width ) * uint32_t(y) + uint32_t(x);
    byteOffset *= m_bytesPerPixel;
    if ( byteOffset + m_bytesPerPixel > m_data.size() )
    {
        DE_ERROR("byteOffset > m_Data.size()")
        return;
    }

    if ( blend )
    {
        color = m_blendFunc( color, getPixel(x,y) );
    }

    if ( m_bytesPerPixel >= 4 )
    {
        uint32_t* p = reinterpret_cast< uint32_t* >( m_data.data() + byteOffset );
        *p = color;
    }
    else if ( m_bytesPerPixel == 3 )
    {
        *(m_data.data() + byteOffset+0) = dbRGB_R( color );
        *(m_data.data() + byteOffset+1) = dbRGB_G( color );
        *(m_data.data() + byteOffset+2) = dbRGB_B( color );
    }
    else if ( m_bytesPerPixel == 2 )
    {
        *(m_data.data() + byteOffset+0) = dbRGB_R( color );
        *(m_data.data() + byteOffset+1) = dbRGB_G( color );
    }
    else if ( m_bytesPerPixel == 1 )
    {
        *(m_data.data() + byteOffset+0) = dbRGB_R( color );
    }
    else // if ( m_BytesPerPixel == 1 )
    {
        DE_ERROR("No bps")
    }
}

uint8_t*
Image::getPixels( int32_t x, int32_t y )
{
    if ( m_width < 1 || m_height < 1 ) return nullptr;
    if ( x < 1 || y < 1 ) return nullptr;
    if ( x >= m_width || y >= m_height ) return nullptr;

    uint64_t byteOffset = (uint64_t( m_width ) * uint32_t(y) + uint32_t(x)) * m_bytesPerPixel;
    if ( byteOffset + m_bytesPerPixel > m_data.size() ) return nullptr;
    return m_data.data() + byteOffset;
}

#ifdef HAVE_GLM
void
Image::setPixel4f( int32_t x, int32_t y, glm::vec4 color, bool blend )
{
    if ( m_width < 1 || m_height < 1 )
    {
        DE_ERROR("Empty image")
        return;
    }

    if ( x < 0 || x >= m_width ) { return; }

    if ( y < 0 || y >= m_height ) { return; }

    uint64_t byteOffset = uint64_t( m_width ) * uint32_t(y) + uint32_t(x);
    byteOffset *= m_bytesPerPixel;
    if ( byteOffset + m_bytesPerPixel > m_data.size() )
    {
        DE_ERROR("byteOffset > m_Data.size()")
        return;
    }

    if ( blend )
    {
        color = blendColor_v4( color, getPixel4f(x,y) );
    }

    float* pDst = reinterpret_cast< float* >( m_data.data() + byteOffset );

    if ( m_pixelFormat == PixelFormat::RGBA32F )
    {
        *pDst = color.r; pDst++;
        *pDst = color.g; pDst++;
        *pDst = color.b; pDst++;
        *pDst = color.a;
    }
    else if ( m_pixelFormat == PixelFormat::RGB32F )
    {
        *pDst = color.r; pDst++;
        *pDst = color.g; pDst++;
        *pDst = color.b;
    }
    else if ( m_pixelFormat == PixelFormat::R32F )
    {
        *pDst = color.r;
    }
    else // if ( m_BytesPerPixel == 1 )
    {
        DE_RUNTIME_ERROR("Unsupported pixelFormat ", m_pixelFormat.str());
    }
}

glm::vec4
Image::getPixel4f( int32_t x, int32_t y, const glm::vec4& colorKey ) const
{
    if ( m_width < 1 || m_height < 1 )
    {
        DE_ERROR("Empty image (",x,",",y,")")
        return colorKey;
    }

    if ( m_bytesPerPixel < 4 )
    {
        DE_ERROR("m_BytesPerPixel < 4")
        return colorKey;
    }

    uint32_t ux = uint32_t( x );
    uint32_t uy = uint32_t( y );
    uint32_t uw = uint32_t( m_width );
    uint32_t uh = uint32_t( m_height );
    if ( ux >= uw || uy >= uh )
    {
        DE_ERROR("Coords outside range (",x,",",y,")")
        return colorKey;
    }

    size_t byteOffset = (size_t( m_width ) * uy + ux) * m_bytesPerPixel;
    if ( byteOffset + m_bytesPerPixel > m_data.size() )
    {
        DE_ERROR("byteOffset + m_BytesPerPixel > m_Data.size()")
        return colorKey;
    }

    glm::vec4 color( 0,0,0,1 );

    const float* pSrc = reinterpret_cast< const float* >( m_data.data() + byteOffset );

    color.r = *pSrc;

    if (m_pixelFormat == PixelFormat::R32F)
    {
        //color.a = 1.0f;
    }
    else if (m_pixelFormat == PixelFormat::RGB32F)
    {
        pSrc++;
        color.g = *pSrc;
        pSrc++;
        color.b = *pSrc;
    }
    else if (m_pixelFormat == PixelFormat::RGBA32F)
    {
        pSrc++;
        color.g = *pSrc;
        pSrc++;
        color.b = *pSrc;
        pSrc++;
        color.a = *pSrc;
    }
    else
    {
        DE_RUNTIME_ERROR("Unsupported float pixelFormat ", m_pixelFormat.str());
    }

    return color;
}
#endif

float
Image::getPixelf( int32_t x, int32_t y, float colorKey ) const
{
    if ( m_width < 1 || m_height < 1 )
    {
        DE_ERROR("Empty image (",x,",",y,")")
        return colorKey;
    }

    if ( m_bytesPerPixel < 4 )
    {
        DE_ERROR("m_BytesPerPixel < 4")
        return colorKey;
    }

    uint32_t ux = uint32_t( x );
    uint32_t uy = uint32_t( y );
    uint32_t uw = uint32_t( m_width );
    uint32_t uh = uint32_t( m_height );
    if ( ux >= uw || uy >= uh )
    {
        DE_ERROR("Coords outside range (",x,",",y,")")
        return colorKey;
    }

    size_t byteOffset = (size_t( m_width ) * uy + ux) * m_bytesPerPixel;
    if ( byteOffset + m_bytesPerPixel > m_data.size() )
    {
        DE_ERROR("byteOffset + m_BytesPerPixel > m_Data.size()")
        return colorKey;
    }

    return *reinterpret_cast< float const * const >( m_data.data() + byteOffset );
}

uint32_t
Image::getPixel( int32_t x, int32_t y, uint32_t colorKey ) const
{
    if ( m_width < 1 || m_height < 1 )
    {
        if (m_debug) { DE_ERROR("Empty image (",x,",",y,")") }
        return colorKey;
    }

    if ( x < 0 || x >= m_width )
    {
        if (m_debug) { DE_ERROR("X-coord outside range (",x,",",y,"), img(",str(),")") }
        return colorKey;
    }

    if ( y < 0 || y >= m_height )
    {
        if (m_debug) { DE_ERROR("Y-coord outside range (",x,",",y,"), img(",str(),")") }
        return colorKey;
    }

    auto fma64u = [] (uint64_t a, uint64_t b, uint64_t c)
    {
        return (a*b)+c;
    };

    const uint64_t byteOffset = fma64u( m_width, y, x) * m_bytesPerPixel;
    if ( byteOffset + m_bytesPerPixel > m_data.size() )
    {
        if (m_debug) { DE_ERROR("ByteOffset outside range (",x,",",y,"), img(",str(),")") }
        return colorKey;
    }

    if ( m_bytesPerPixel == 4 )
    {
        return *reinterpret_cast< uint32_t const * const >( m_data.data() + byteOffset );
    }
    else if ( m_bytesPerPixel == 3 )
    {
        uint8_t r = *(m_data.data() + byteOffset);
        uint8_t g = *(m_data.data() + byteOffset + 1);
        uint8_t b = *(m_data.data() + byteOffset + 2);
        return dbRGB( r,g,b );
    }
    else if ( m_bytesPerPixel == 2 )
    {
        uint8_t r = *(m_data.data() + byteOffset);
        uint8_t g = *(m_data.data() + byteOffset + 1);
        return dbRGB( r,g,0 );
    }
    else if ( m_bytesPerPixel == 1 )
    {
        uint8_t r = *(m_data.data() + byteOffset);
        return dbRGB( r,r,r );
    }
    else // if ( m_BytesPerPixel > 4 )
    {
        DE_WARN("Unsupported format (",x,",",y,"), img(",str(),")")
        return *reinterpret_cast< uint32_t const * const >( m_data.data() + byteOffset );
    }
}

void
Image::resize( int32_t w, int32_t h, PixelFormat pixelFormat )
{
    setPixelFormat( pixelFormat );
    resize(w,h);
}

void
Image::resize( int32_t w, int32_t h )
{
    if ( w < 1 || h < 1 )
    {
        clear();
        return; // cleared image
    }

    uint64_t byteCount = uint64_t( w ) * uint64_t( h ) * m_bytesPerPixel;
    m_data.resize( byteCount, 0x00 );
    m_width = w;
    m_height = h;
}

void Image::shrink_to_fit() { return m_data.shrink_to_fit(); }

#ifdef HAVE_GLM
void
Image::fill( const glm::vec4& color )
{
    if (empty()) { return; } // Nothing todo

    if (m_pixelFormat == PixelFormat::R32F)
    {
        auto p = writePtr< float >();
        auto n = uint64_t( m_width ) * size_t( m_height );
        for ( size_t i = 0; i < n; ++i )
        {
            *p++ = color.r;
        }
    }
    /*
    else if (m_pixelFormat == PixelFormat::R8G8B8)
    {
        uint8_t r = dbRGB_R(color);
        uint8_t g = dbRGB_G(color);
        uint8_t b = dbRGB_B(color);
        uint8_t * pixels = writePtr< uint8_t >();
        for ( size_t i = 0; i < uint64_t( m_Width ) * size_t( m_Height ); ++i )
        {
            *pixels++ = r;
            *pixels++ = g;
            *pixels++ = b;
        }
    }
*/
    else
    {
        DE_ERROR("Unsupported format ", str())
    }
}
#endif

void
Image::fill( uint32_t color )
{
    if (empty())
    {
        return;
    }

    if (m_pixelFormat == PixelFormat::R8G8B8A8)
    {
        uint32_t * pixels = writePtr< uint32_t >();
        for ( size_t i = 0; i < uint64_t( m_width ) * size_t( m_height ); ++i )
        {
            *pixels = color;
            pixels++;
        }
    }
/*
    else if (m_pixelFormat == PixelFormat::R8G8B8)
    {
        uint8_t r = dbRGB_R(color);
        uint8_t g = dbRGB_G(color);
        uint8_t b = dbRGB_B(color);
        uint8_t * pixels = writePtr< uint8_t >();
        for ( size_t i = 0; i < uint64_t( m_Width ) * size_t( m_Height ); ++i )
        {
            *pixels++ = r;
            *pixels++ = g;
            *pixels++ = b;
        }
    }
*/
    else
    {
        DE_ERROR("Unsupported format ", str())
    }
}

void
Image::fillZero()
{
    if (m_data.empty()) return;
   ::memset( m_data.data(), 0x00, m_data.size() );
}

void
Image::floodFill( int32_t x, int32_t y, uint32_t newColor, uint32_t oldColor )
{
    //double const sec0 = Timer::GetTimeInSeconds();

    int32_t const w = m_width;
    int32_t const h = m_height;

    //DWORD oldColor=MemblockReadDword(mem,memX,memY,x,y);
    if ( getPixel( x,y ) == newColor ) return; // nothing todo

    int32_t lg, rg;
    int32_t px = x;

    while ( getPixel( x,y ) == oldColor )
    {
        setPixel( x,y, newColor );
        x--;
    }
    lg = x+1;
    x = px+1;
    while ( getPixel( x,y ) == oldColor )
    {
        setPixel( x,y, newColor );
        x++;
    }
    rg = x-1;
    for ( x = rg; x >= lg; --x )
    {
        if ( ( getPixel( x,y-1 ) == oldColor ) && ( y > 1 ) )
        {
            floodFill( x, y-1, newColor, oldColor );
        }
        if ( ( getPixel( x,y+1 ) == oldColor ) && ( y < h - 1 ) )
        {
            floodFill( x, y+1, newColor, oldColor );
        }
    }

    //double const sec1 = Timer::GetTimeInSeconds();
    //double const ms = 1000.0*(sec1 - sec0);
    //DE_INFO( "w = ", w, ", h = ", h, ", ms = ", ms )
}

void
Image::flipVertical()
{
   std::vector< uint8_t > row_buf1;
   std::vector< uint8_t > row_buf2;
   for ( int32_t y = 0; y < h()/2; ++y )
   {
      copyRowFrom( row_buf1, y );
      copyRowFrom( row_buf2, h() - 1 - y );
      copyRowTo( row_buf1, h() - 1 - y );
      copyRowTo( row_buf2, y );
   }
}

void
Image::flipHorizontal()
{
   std::vector< uint8_t > col1;
   std::vector< uint8_t > col2;
   for ( int32_t x = 0; x < w()/2; ++x )
   {
      copyColFrom( col1, x );
      copyColFrom( col2, w() - 1 - x );
      copyColTo( col1, w() - 1 - x );
      copyColTo( col2, x );
   }
}

Image
Image::copy( Recti const & pos ) const
{
   int w = pos.w;
   int h = pos.h;
   Image dst( w,h, m_pixelFormat );
   for ( int j = 0; j < h; ++j )
   {
      for ( int i = 0; i < w; ++i )
      {
         auto color = getPixel( pos.x + i, pos.y + j );
         dst.setPixel( i, j, color );
      }
   }
   return dst;
}

void
Image::copyRowFrom( std::vector< uint8_t > & out, int32_t y )
{
   if ( uint32_t( y ) >= uint32_t( m_height ) )
   {
      DE_DEBUG("Invalid row index(",y,")")
      return;
   }

   uint64_t bpr = uint64_t( w() ) * m_bytesPerPixel;
   if ( bpr < 1 )
   {
      DE_DEBUG("Nothing todo")
      return;
   }

   out.resize( bpr, 0x00 );
   ::memcpy( out.data(), data() + (bpr * y), bpr );
}

void
Image::copyRowTo( std::vector< uint8_t > const & row, int32_t y )
{
   if ( uint32_t( y ) >= uint32_t( m_height ) )
   {
      DE_DEBUG("Invalid row index(",y,")")
      return;
   }

   uint64_t bpr = uint64_t( w() ) * m_bytesPerPixel;
   if ( bpr < 1 )
   {
      DE_DEBUG("Nothing todo")
      return;
   }

   if ( bpr != row.size() )
   {
      DE_ERROR("Cant copy incomplete row ", y )
      return;
   }

   ::memcpy( data() + (bpr * y), row.data(), bpr );
}

void
Image::copyColFrom( std::vector< uint8_t > & col, int32_t x )
{
   if ( uint32_t( x ) >= uint32_t( m_width ) )
   {
      DE_DEBUG("Invalid column x(",x,")")
      return;
   }

   col.resize( size_t(m_height) * m_bytesPerPixel );

   uint8_t* dst = col.data();
   for ( int32_t y = 0; y < m_height; ++y )
   {
      uint8_t* src = getPixels(x,y);
      ::memcpy( dst, src, m_bytesPerPixel );
      dst += m_bytesPerPixel;
   }
}

void
Image::copyColTo( std::vector< uint8_t > const & col, int32_t x )
{
//   if ( uint32_t( x ) >= uint32_t( m_Width ) )
//   {
//      DE_DEBUG("Invalid col index(",y,")")
//      return;
//   }

//   uint64_t bpr = uint64_t( w() ) * getBytesPerPixel();
//   if ( bpr < 1 )
//   {
//      DE_DEBUG("Nothing todo")
//      return;
//   }

//   if ( bpr != row.size() )
//   {
//      DE_ERROR("Cant copy incomplete row ", y )
//      return;
//   }

//   ::memcpy( data() + (bpr * y), row.data(), bpr );
   if ( uint32_t( x ) >= uint32_t( m_width ) )
   {
      DE_DEBUG("Invalid column x(",x,")")
      return;
   }

//   uint32_t bpp = getBytesPerPixel();

//   uint32_t bpc = uint32_t(m_Height) * bpp;
//   col.resize( bpc );

//   uint8_t* dst = col.data();
//   for ( int32_t y = 0; y < m_Height; ++y )
//   {
//      uint8_t* src = getPixels(x,y);
//      ::memcpy( dst, src, bpp );
//      dst += bpp;
//   }
}

void
Image::switchRB()
{
   for ( int32_t y = 0; y < h(); ++y )
   {
      for ( int32_t x = 0; x < w(); ++x )
      {
         uint32_t c = getPixel( x, y );
         setPixel( x, y, dbRGB( dbRGB_B( c ), dbRGB_G( c ), dbRGB_R( c ), dbRGB_A( c ) ) );
      }
   }
}

uint8_t*
Image::getRow( int32_t y )
{
   // TODO: Necessary?
   if ( empty() ) { DE_ERROR("Empty") return nullptr; }

   // CheckPoint 1: Test user param row-y if valid
   if ( y < 0 || y >= m_height )
   {
      DE_DEBUG("Invalid y(",y,") of h(",m_height,")")
      return nullptr;
   }

   // Compute linear byte index...
   uint64_t const byteOffset = uint64_t( y ) * stride();

   // CheckPoint 2: Test linear byte index if valid
   if ( byteOffset >= m_data.size() )
   {
      DE_DEBUG("Invalid byteOffset(",byteOffset,"), y(",y,") of h(",m_height,")")
      return nullptr;
   }

   // Output address (base+offset) of first pixel of row y...
   return m_data.data() + byteOffset;
}

uint8_t*
Image::getColumn( int32_t x )
{
   if ( empty() ) { DE_ERROR("Empty") return nullptr; }

   if ( x < 0 || x >= m_width )
   {
      DE_DEBUG("Invalid x(",x,") of w(",m_width,")")
      return nullptr;
   }

   if ( x >= int32_t(m_data.size()) )
   {
      DE_DEBUG("Invalid x(",x,") > m_Data.size(",m_data.size(),")")
      return nullptr;
   }
   return m_data.data() + x;
}


std::string
Image::str( bool withUri, bool withBytes ) const
{
    std::ostringstream o;
    if ( empty() )
    {
        o << "empty";
    }
    else
    {
        o << "[" << dbStrBytes( computeMemoryConsumption() ) << "] ";
        o << m_width << "," << m_height << "," << pixelFormatStr();
        if ( withUri ) o << "," << m_uri;

        if ( withBytes )
        {
            o << "\n";
            const float* pSrc = readPtr<float>();
            for (int y = 0; y < h(); ++y)
            {
                std::ostringstream q;
                for (int x = 0; x < w(); ++x)
                {
                    q << *pSrc++ << ",";
                }
                o << q.str() << "\n";
            }
        }
    }

    return o.str();
}



Image
Image::convert( PixelFormat outputFormat ) const
{
    if ( this->w() < 1 || this->h() < 1 )
    {
        DE_ERROR("Empty image cannot be converted." )
        return Image();
    }

    auto pConverter = PixelFormatConverter::getConverter( this->pixelFormat(), outputFormat );
    if ( !pConverter )
    {
        DE_ERROR("Cannot convert image(", str(), ") to format ", outputFormat.str() )
        return Image();
    }

    Image outputImage( this->w(), this->h(), outputFormat );
    pConverter(this->data(), outputImage.data(), this->pixelCount());
    return outputImage;
}

} // end namespace de.

