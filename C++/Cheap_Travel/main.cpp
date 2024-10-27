#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // ÍÓÇÈ ÇáÊßáİÉ ÈÇÓÊÎÏÇã ÊĞÇßÑ ÇáÑÍáÉ ÇáæÇÍÏÉ İŞØ
    int cost_all_single_tickets = n * a;

    // ÍÓÇÈ ÇáÊßáİÉ ÈÇÓÊÎÏÇã ÇáÊĞÇßÑ ÇáãÊÚÏÏÉ İŞØ (ÍÊì áæ ßÇäÊ ÃßËÑ ãä ÚÏÏ ÇáÑÍáÇÊ)
    int cost_all_multi_tickets = ((n + m - 1) / m) * b;

    // ÍÓÇÈ ÇáÊßáİÉ ÈÇÓÊÎÏÇã ÎáíØ ãä ÇáÊĞÇßÑ ÇáãÊÚÏÏÉ + ÇáİÑÏíÉ
    int cost_mixed;
    int remainder_rides = n % m;
    int cost_remainder = remainder_rides * a;

    if (cost_remainder < b) {
        cost_mixed = (n / m) * b + cost_remainder;
    } else {
        cost_mixed = (n / m) * b + b;
    }

    // ÇáÂä äŞÇÑä Èíä ÇáÍáæá ÇáËáÇËÉ áÇÎÊíÇÑ ÇáÃŞá
    int result = cost_all_single_tickets;

    if (cost_all_multi_tickets < result) {
        result = cost_all_multi_tickets;
    }

    if (cost_mixed < result) {
        result = cost_mixed;
    }

    // ØÈÇÚÉ ÇáäÊíÌÉ ÇáäåÇÆíÉ
    cout << result << endl;

    return 0;
}
