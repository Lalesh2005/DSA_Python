class Solution {
	public:
	int countIslands(vector<vector<char>> & grid) {
		// Code here
		
		int count = 0;
		
		int r = grid.size();
		
		int c = grid[0].size();
		
		vector<vector<bool>> vst(r, vector<bool>(c, false));
		
		int dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
		
		int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
		
		for (int i = 0; i < r; i++) {
			
			for (int j = 0; j < c; j++) {
				
				if (grid[i][j] == 'L' && !vst[i][j]) {
					
					count++;
					
					stack<pair<int, int>> s;
					
					s.push({i, j});
					
					vst[i][j] = true;
					
					while (!s.empty()) {
						
						auto [cr, cc] = s.top();
						
						s.pop();
						
						for (int k = 0; k < 8; k++) {
							
							int nr = cr + dr[k];
							
							int nc = cc + dc[k];
							
							if (nr >= 0 && nr < r &&
							
							nc >= 0 && nc < c &&
							
							grid[nr][nc] == 'L' &&
							
							!vst[nr][nc]) {
								
								vst[nr][nc] = true;
								
								s.push({nr, nc});
								
							}
							
						}
						
					}
					
				}
				
			}
			
		}
		
		return count;
		
	}
};
