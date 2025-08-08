class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,double>> cars(n); 
        for (int i = 0; i < n; ++i)
            cars[i] = {position[i], (double)(target - position[i]) / speed[i]};

        sort(cars.begin(), cars.end(), [](auto& a, auto& b){ return a.first > b.first; });

        int fleets = 0;
        double lastTime = 0.0;
        for (auto& [pos, t] : cars) {
            if (t > lastTime) {
                ++fleets;
                lastTime = t;
            }
        }
        return fleets;
    }
};
