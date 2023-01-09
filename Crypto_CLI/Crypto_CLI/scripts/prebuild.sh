# Path of buildinfo.h
buildInfoFile="../h/buildinfo.h"

# Header guard start
printf "#ifndef buildinfo_h\n" > $buildInfoFile
printf "#define buildinfo_h\n\n" >> $buildInfoFile

# Build Variables

# Build Timestamp
printf "   const char* timestamp = \"%s\";\n\n" "$(date)" >> $buildInfoFile

# Header guard end
printf "#endif" >> $buildInfoFile
