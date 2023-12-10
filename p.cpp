#include<bits/stdc++.h>
using namespace std;
map<string,vector<string>> adj;
map<string,int> degree;
set<string>node;
int cnt=0;
void all_posi(vector<string>current={})
{
    if(current.size()==node.size())
    {
        for(auto i:current)
            cout<<i<<" ";
        cout<<endl;
        cnt++;
    }
    for(auto i: node)
    {
        if(degree[i]==0)
        {
            degree[i]--;
            current.push_back(i);
            for(auto j: adj[i])
                degree[j]--;
            all_posi(current);
            degree[i]==0;
            current.pop_back();
            for(auto j: adj[i])
                degree[j]++;
        }
    }
}
void solveTopo()
{

    int n,edge;
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        string u,v;
        cin>>u>>v;
        if(u=="0" and v=="0")
        {
            break;
        }
        adj[u].push_back(v);
        degree[v]++;
        node.insert(u);
        node.insert(v);

    }
    all_posi();
    cout<<cnt<<endl;
    if(cnt==0)
    {
        cout<<"cycle"<<endl;
    }
    return;
}
const int N=102,M=1e9+7;
int a[N];
int dp[N][N];
int mcm(int i,int j)
{
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans =M;
    for(int k=i;k<j;k++)
    {
        ans = min(ans,mcm(i,k)+mcm(k+1,j)+a[i-1]*a[k]*a[j]);
    }
    return dp[i][j]=ans;
}
void solveMCM()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<mcm(1,n-1)<<endl;
    return;
}
class Node
{
   public:
    string jobId;
    int deadline, profit;
    Node(string jobId, int deadline, int profit) {
        this->jobId = jobId;
        this->deadline = deadline;
        this->profit = profit;
    }
};
bool cmp(Node a, Node b)
{
    if (a.profit > b.profit)
        return true;
    return false;
}
void job_sequencing()
{
    int n;
    cin >> n;
    int max_deadline = 0;
    vector<Node> v;
    for (int i = 1; i <= n; i++) {
        string s;
        int deadline, profit;
        cin >> s >> deadline >> profit;
        v.push_back(Node(s, deadline, profit));
        max_deadline = max(max_deadline, deadline);
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> slot(max_deadline, -1);
    vector<string> ans;
    int max_profit = 0;
    for (int i = 0; i < n; i++) {
        int deadline = v[i].deadline;
        for (int j = deadline - 1; j >= 0; j--) {
            if (slot[j] == -1) {
                ans.push_back(v[i].jobId);
                max_profit += v[i].profit;
                slot[j] = 1;
                break;
            }
        }
    }
    cout << max_profit << endl;
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}
const int MAX = 100; // Maximum number of vertices

int graph[MAX][MAX];
int numVertices;
int countSolutions = 0; // Track the number of solutions

bool isSafe(int v, int colors[], int c) {
    for (int i = 0; i < numVertices; ++i) {
        if (graph[v][i] && c == colors[i])
            return false;
    }
    return true;
}

void graphColoringUtil(int colors[], int m, int v) {
    if (v == numVertices) {
        cout << "Solution " << ++countSolutions << ":\n";
        for (int i = 0; i < numVertices; ++i)
            cout << "Vertex " << i << " --> Color " << colors[i] << "\n";
        cout << "\n";
        return;
    }

    for (int c = 1; c <= m; ++c) {
        if (isSafe(v, colors, c)) {
            colors[v] = c;
            graphColoringUtil(colors, m, v + 1);
            colors[v] = 0; // Backtrack
        }
    }
}

void graphColoring(int m) {
    int colors[MAX] = {0};
    countSolutions = 0; // Reset the count for each run

    graphColoringUtil(colors, m, 0);

    if (countSolutions == 0) {
        cout << "No solution exists\n";
    } else {
        cout << "Total number of solutions: " << countSolutions << "\n";
    }
}
void graph_colour()
{
     int numEdges, u, v;

    // Input the number of vertices and edges
    cin >> numVertices >> numEdges;

    // Initialize graph with 0
    for (int i = 0; i < numVertices; ++i) {
        for (int j = 0; j < numVertices; ++j) {
            graph[i][j] = 0;
        }
    }

    // Input edges
    for (int i = 0; i < numEdges; ++i) {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1; // For undirected graphs
    }

    int m; // Number of colors
    cin >> m;

    graphColoring(m);
}
void subsetSumUtil(int set[], int target, int temp[], int size, int start, int sum) {
    if (sum == target) {
        // If the current sum matches the target, print the subset
        cout << "Subset found: ";
        for (int i = 0; i < size; ++i) {
            if (temp[i] == 1) {
                cout << set[i] << " ";
            }
        }
        cout << endl;
    }

    for (int i = start; i < size; ++i) {
        // Add the current element to the temporary subset
        temp[i] = 1;
        sum += set[i];

        // Recursively check the subset sum with the added element
        if (sum <= target) {
            subsetSumUtil(set, target, temp, size, i + 1, sum);
        }

        // Backtrack: Remove the last element to explore other possibilities
        sum -= set[i];
        temp[i] = 0;
    }
}

void subsetSum(int set[], int size, int target) {
    int *temp = new int[size];
    for (int i = 0; i < size; ++i) {
        temp[i] = 0;
    }

    subsetSumUtil(set, target, temp, size, 0, 0);

    delete[] temp; // Free dynamically allocated memory
}
void sum_of_subset()
{
    int inputSet[] = {2, 4, 6, 8, 10};
    int targetSum = 10;
    int setSize = sizeof(inputSet) / sizeof(inputSet[0]);

    subsetSum(inputSet, setSize, targetSum);

    return;
}
#define N 4
void printSolution(int board[N][N])
{
	for (int i = 0; i < N; i++)
    {
		for (int j = 0; j < N; j++)
		if(board[i][j])
			cout << "Q ";
		else cout<<". ";
		printf("\n");
	}
}
bool isSafe(int board[N][N], int row, int col)
{
	int i, j;

	for (i = 0; i < col; i++)
		if (board[row][i]==1)
			return false;

	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j]==1)
			return false;

	for (i = row, j = col; j >= 0 && i < N; i++, j--)
		if (board[i][j]==1)
			return false;

	return true;
}
bool solveNQUtil(int board[N][N], int col)
{
    if (col >= N)
		return true;
    for (int i = 0; i < N; i++)
    {
        if (isSafe(board, i, col))
        {
            board[i][col] = 1;
            if (solveNQUtil(board, col + 1))
				return true;
            board[i][col] = 0; // BACKTRACK
		}
	}
    return false;
}


bool solveNQ()
{
	int board[N][N] = {0};

	if (solveNQUtil(board, 0) == false) {
		cout << "Solution does not exist";
		return false;
	}

	printSolution(board);
	return true;
}
/**
struct Item {
  int weight;
  int value;
};

struct Nodes
{
  int level;
  int bound;
  int profit;
  vector<int> selectedItems;

  Nodes(int level, int bound, int profit, vector<int> selectedItems) {
    this->level = level;
    this->bound = bound;
    this->profit = profit;
    this->selectedItems = selectedItems;
  }
};
bool compareItems(const Item& a, const Item& b) {
  return a.value / a.weight > b.value / b.weight;
}

int calculateBound(int level, int currentProfit, int capacity, vector<Item>& items) {
  int bound = currentProfit;
  for (int i = level; i < items.size(); i++) {
    if (capacity >= items[i].weight) {
      bound += items[i].value;
      capacity -= items[i].weight;
    } else {
      break;
    }
  }
  return bound;
}
int branchAndBound(vector<Item>& items, int capacity) {
  priority_queue<Nodes> q;
  q.push(Nodes(0, 0, 0, vector<int>()));

  int maxProfit = 0;
  while (!q.empty()) {
    Nodes node = q.top();
    q.pop();

    if (node.bound <= maxProfit) {
      continue;
    }

    if (node.level == items.size()) {
      if (node.profit > maxProfit) {
        maxProfit = node.profit;
      }
      continue;
    }

    // Branching
    Nodes leftChild(node.level + 1, calculateBound(node.level + 1, node.profit, capacity, items), node.profit, node.selectedItems);
    Nodes rightChild(node.level + 1, calculateBound(node.level + 1, node.profit + items[node.level].value, capacity - items[node.level].weight, items), node.profit + items[node.level].value, node.selectedItems);
    node.selectedItems.push_back(node.level);
    rightChild.selectedItems.push_back(node.level);

    q.push(leftChild);
    q.push(rightChild);
  }

  return maxProfit;
}


void branch_bound()
{
    int n, capacity;
  cin >> n >> capacity;

  vector<Item> items(n);
  for (int i = 0; i < n; i++) {
    cin >> items[i].weight >> items[i].value;
  }

  sort(items.begin(), items.end(), compareItems);

  int maxProfit = branchAndBound(items, capacity);

  cout << maxProfit << endl;

  return ;
}**/
int main()
{
    solveTopo();
    solveMCM();
    job_sequencing();
    graph_colour();
    sum_of_subset();
    solveNQ();
    ///branch_bound();


}
