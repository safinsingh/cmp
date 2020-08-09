#define IN_VEC(v, i) find(v.begin(), v.end(), i) != v.end()
#define IN_VEC_NOT(v, i) find(v.begin(), v.end(), i) == v.end()
#define PB(v, e) v.push_back(e)
#define ITER(i) while (i--)
#define ENDL() cout << "\n";
#define INT_INPUT(e) \
  int e;             \
  cin >> e
#define OPTIMIZE()             \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);
#define COUT_VEC(v)                  \
  for (int i = 0; i < v.size(); i++) \
  {                                  \
    cout << v[i] << ' ';             \
  }
#define VEC_INT(v) vector<int> v
#define ITER_VEC(v) for (int i = 0; i < v.size(); i++)
#define MIN_VEC(v) *min_element(v.begin(), v.end())
#define FOR(z) for (int i = 0; i < z; i++)
#define VEC_SUM(v) accumulate(v.begin(), v.end(), 0)