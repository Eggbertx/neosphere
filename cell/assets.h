#ifndef CELL__ASSETS_H__INCLUDED
#define CELL__ASSETS_H__INCLUDED

#include <time.h>

typedef struct asset asset_t;

typedef
struct sgm_info
{
	char name[256];
	char author[256];
	char description[256];
	int  width;
	int  height;
	char script[256];
} sgm_info_t;

extern void          initialize_assets (void);
extern void          shutdown_assets   (void);
extern asset_t*      new_file_asset    (const path_t* path);
extern asset_t*      new_s2gm_asset    (const char* json, time_t src_mtime);
extern asset_t*      new_sgm_asset     (sgm_info_t sgm, time_t src_mtime);
extern void          free_asset        (asset_t* asset);
extern const path_t* get_asset_path    (const asset_t* asset);
extern bool          build_asset       (asset_t* asset, const path_t* int_path, bool *out_is_new);

#endif // CELL__ASSETS_H__INCLUDED
