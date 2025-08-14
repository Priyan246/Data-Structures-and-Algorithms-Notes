#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num, val;
    cin >> num >> val;

    vector<pair<int, int>> houses(num); // {position, house_number}

    for (int i = 0; i < num; ++i) {
        int h, p;
        cin >> h >> p;
        houses[i] = {p, h};
    }

    // Sort by position
    sort(houses.begin(), houses.end());

    int maxDist = -1;
    int resultH1 = 0, resultH2 = 0;

    for (int i = 0; i < num - 1; ++i) {
        int dist = houses[i + 1].first - houses[i].first;
        if (dist > maxDist) {
            maxDist = dist;
            resultH1 = houses[i].second;
            resultH2 = houses[i + 1].second;
        }
    }

    // Output in ascending house number order
    if (resultH1 > resultH2) swap(resultH1, resultH2);
    cout << resultH1 << " " << resultH2 << endl;

    return 0;
}
