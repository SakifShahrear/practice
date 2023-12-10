///Order List
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define order_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
int main()
{
    order_set s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    int ans=s.order_of_key(3);/// 3 er theke choto koto gula
                            ///value ache tar count dekhabe
    cout<<ans<<endl;
    auto c=s.find_by_order(2); ///k number index a koto value ache ta show korbe
    cout<<*c<<endl;
}

