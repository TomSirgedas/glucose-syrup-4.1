#include "fake_zlib.h"
#include <stdio.h>


int gzread( gzFile file, void* buf, unsigned int len )
{
   return fread( buf, 1, len, file );
}

gzFile gzdopen( int fd, const char *mode )
{
   printf( "Reading from <stdin> not supported on Windows port. Provide an input file instead. See --help" );
   throw std::runtime_error("Reading from <stdin> not supported.");
   return nullptr;
}

gzFile gzopen( const char *path, const char *mode )
{
   return fopen( path, mode );
}

int gzclose( gzFile file )
{
   return fclose( file );
}