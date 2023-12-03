#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> v(n);

    // Read team names into the vector
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    // Sort the vector to group the same team names together
    std::sort(v.begin(), v.end());

    // Find the team with the maximum score
    std::string winningTeam;
    int maxScore = 0;
    int currentScore = 1; // Initialize with 1 goal for the first team

    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
            // Same team, increment the current score
            currentScore++;
        } else {
            // Different team, check if it has more goals
            if (currentScore > maxScore) {
                maxScore = currentScore;
                winningTeam = v[i - 1];
            }
            // Reset current score for the new team
            currentScore = 1;
        }
    }

    // Check the last team
    if (currentScore > maxScore) {
        maxScore = currentScore;
        winningTeam = v[n - 1];
    }

    // Output the winning team
    std::cout << winningTeam << std::endl;

    return 0;
}
