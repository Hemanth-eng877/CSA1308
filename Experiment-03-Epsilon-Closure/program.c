#include <stdio.h>

int n = 3;
int transitions[3][3] = {
    {1, 1, 0}, // State 0 has e-transitions to 0 and 1
    {0, 1, 1}, // State 1 has e-transitions to 1 and 2
    {0, 0, 1}  // State 2 has e-transitions to 2
};

int visited[3];

void dfs(int state) {
    visited[state] = 1;
    printf("q%d ", state);
    for (int i = 0; i < n; i++) {
        if (transitions[state][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    printf("Epsilon Closures:\n");
    for (int i = 0; i < n; i++) {
        for(int j=0; j<n; j++) visited[j] = 0;
        printf("e-closure(q%d): { ", i);
        dfs(i);
        printf("}\n");
    }
    return 0;
}