/**@author Merder Kim <hoxnox@gmail.com> 
 * @date 20130117 22:25:30 */

#ifndef __SNSTRM_QRRCONFIG_H__
#define __SNSTRM_QRRCONFIG_H__

#if defined(SNSTRM_SHARED) && (defined(_WIN32) || defined(WIN32))
#	if defined()
#		define SNSTRM_API __declspec(dllexport)
#	else
#		define SNSTRM_API __declspec(dllimport)
#	endif
#else
#	define SNSTRM_API
#endif
#define SNSTRM_VERSION_MAJOR 1
#define SNSTRM_VERSION_MINOR 0
#define SNSTRM_VERSION_PATCH 0
/* #undef SNSTRM_WITH_BOOST_IOSTREAMS */


namespace snappy {

class Config{
	public:
		static const char magic[];
		static const int magic_sz;
		static const unsigned defaultChunkSize = 1 << 15;
};

} // namespace

#endif // __SNSTRM_QRRCONFIG_H__

