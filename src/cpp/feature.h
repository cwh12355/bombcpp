#pragma once
#ifndef __TT_FEATURE__
#define __TT_FEATURE__

#ifdef __cplusplus

extern "C" 
{
#endif
int recast_type_c();
// int i_o();
#ifdef __cplusplus
}

int i_o();
bool output(std::vector<float> const & attr);
int recast_type_cpp();
void review_extrn_origin();
#endif
#endif //__TT_FEATURE__