#include <iostream>
#include <vector>

using namespace std;

void dfs(int skill, vector<bool> &aff, vector<pair<int, int>> &ds) {
    if (aff[skill]) {
        return;
    }
    aff[skill] = true;
    for (auto &dep : ds) {
        if (dep.second == skill) {
            dfs(dep.first, aff, ds);
        }
    }
}
int N, M, K;
int main() {
    
    cin >> N >> M >> K;

    vector<int> bok(K);
    for (int i = 0; i < K; ++i) {
        cin >> bok[i];
    }

    vector<bool> aff(N, false);
    for (int skill : bok) {
        aff[skill] = true;
    }

    vector<pair<int, int>> ds(M);
    for (int i = 0; i < M; ++i) {
        cin >> ds[i].first >> ds[i].second;
    }

    for (int skill : bok) {
        dfs(skill, aff, ds);
    }

    int total_aff = 0;
    for (bool skill_aff : aff) {
        if (skill_aff) {
            total_aff++;
        }
    }

    cout << total_aff;
    
}
