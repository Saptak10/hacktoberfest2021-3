#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#pragma GCC optimize("unroll-loops")
#include<stdio.h>
#include
#include
#include
#include
#include<string.h>

#ifdef LOCAL
#define eprintf(...) fprintf(stderr, VA_ARGS)
#else
#define NDEBUG
#define eprintf(...) do {} while (0)
#endif
#include

using namespace std;

typedef long long LL;
typedef vector VI;

#define fo(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define EACH(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)

template inline void amin(T &x, const T &y) { if (y < x) x = y; }
template inline void amax(T &x, const T &y) { if (x < y) x = y; }
#define rprintf(fmt, begin, end) do { const auto end_rp = (end); auto it_rp = (begin); for (bool sp_rp=0; it_rp!=end_rp; ++it_rp) { if (sp_rp) putchar(' '); else sp_rp = true; printf(fmt, *it_rp); } putchar('\n'); } while(0)

class Solution {
public:
uint32_t reverseBits(uint32_t n) {
uint32_t result=0;
fo(i,32){
result = (result<<1) + (n>>i &1);
}
return result;

}
};
