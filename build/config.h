/*
 * Auto-generated header for CMake.  See config.h.in if you need to modify the
 * original.
 */

#ifndef _conky_config_h_
#define _conky_config_h_

/* #undef DEBUG */

#define SYSTEM_NAME "Darwin"
#define PACKAGE_NAME "conky"
#define VERSION "1.11.4_pre"
#define SYSTEM_CONFIG_FILE "/etc/conky/conky.conf"
#define PACKAGE_LIBDIR "/usr/local/lib/conky"
#define DEFAULTNETDEV "en0"
#define XDG_CONFIG_FILE "$HOME/.config/conky/conky.conf"
#define CONFIG_FILE "$HOME/.conkyrc"
#define LOCALE_DIR "/usr/local/share/locale"
#define MAX_USER_TEXT_DEFAULT 16384
#define DEFAULT_TEXT_BUFFER_SIZE 256
#define MAX_NET_INTERFACES 256
#define HTTPPORT 

#define BUILD_I18N 1

/* #undef HAVE_SYS_STATFS_H */
#define HAVE_SYS_PARAM_H 1
/* #undef HAVE_SYS_INOTIFY_H */
#define HAVE_DIRENT_H 1

/* #undef HAVE_SOME_SOUNDCARD_H */
/* #undef HAVE_LINUX_SOUNDCARD_H */

#define HAVE_STRNDUP 1

/* #undef HAVE_FOPENCOOKIE */
/* #undef HAVE_FUNOPEN */

/* #undef HAVE_PIPE2 */
#define HAVE_O_CLOEXEC 1

#define HAVE_CLOCK_GETTIME 1

#define BUILD_X11 1

#define OWN_WINDOW 1

/* #undef BUILD_XDAMAGE */

#define BUILD_XINERAMA 1

#define BUILD_XFT 1

#define BUILD_XSHAPE 1

#define BUILD_ARGB 1

#define BUILD_XDBE 1

/* #undef BUILD_PORT_MONITORS */

/* #undef BUILD_AUDACIOUS */

/* #undef NEW_AUDACIOUS_FOUND */

#define BUILD_MPD 1

/* #undef BUILD_MYSQL */

#define BUILD_MOC 1

/* #undef BUILD_NVIDIA */

/* #undef BUILD_XMMS2 */

/* #undef BUILD_HDDTEMP */

/* #undef BUILD_LIBXML2 */

#define BUILD_CURL 1

#define BUILD_WEATHER_METAR 1

#define BUILD_IMLIB2 1

#define BUILD_MATH 1

#define BUILD_BUILTIN_CONFIG 1

#define BUILD_OLD_CONFIG 1

#define BUILD_NCURSES 1
/* #undef LEAKFREE_NCURSES */

#define BUILD_APCUPSD 1

#define BUILD_IOSTATS 1

/* #undef BUILD_IPGFREQ */

/* #undef BUILD_WLAN */

/* #undef BUILD_ICAL */

/* #undef BUILD_IRC */

/* #undef BUILD_PULSEAUDIO */

/* #undef BUILD_IPV6 */

/* #undef BUILD_HTTP */

/* #undef BUILD_ICONV */

/* #undef BUILD_LUA_CAIRO */

/* #undef BUILD_LUA_IMLIB2 */

/* #undef BUILD_LUA_RSVG */

/* #undef BUILD_IBM */

/* #undef BUILD_RSS */

#define BUILD_CMUS 1

/* #undef BUILD_JOURNAL */

#define HAVE_STATFS64 1
#ifndef HAVE_STATFS64
#define statfs64 statfs
#endif

#endif /* _conky_config_h_ */
