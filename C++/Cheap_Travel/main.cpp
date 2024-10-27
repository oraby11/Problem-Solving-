#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // ���� ������� �������� ����� ������ ������� ���
    int cost_all_single_tickets = n * a;

    // ���� ������� �������� ������� �������� ��� (��� �� ���� ���� �� ��� �������)
    int cost_all_multi_tickets = ((n + m - 1) / m) * b;

    // ���� ������� �������� ���� �� ������� �������� + �������
    int cost_mixed;
    int remainder_rides = n % m;
    int cost_remainder = remainder_rides * a;

    if (cost_remainder < b) {
        cost_mixed = (n / m) * b + cost_remainder;
    } else {
        cost_mixed = (n / m) * b + b;
    }

    // ���� ����� ��� ������ ������� ������� �����
    int result = cost_all_single_tickets;

    if (cost_all_multi_tickets < result) {
        result = cost_all_multi_tickets;
    }

    if (cost_mixed < result) {
        result = cost_mixed;
    }

    // ����� ������� ��������
    cout << result << endl;

    return 0;
}
