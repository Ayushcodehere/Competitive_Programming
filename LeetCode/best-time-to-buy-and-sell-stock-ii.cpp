class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int itr = 0;
        int sell = itr + 1;
        int sellPrice;
        int buyPrice;
        int profit = 0;
        while (itr < prices.size() - 1 && sell < prices.size())
        {
            if (prices[itr] < prices[sell])
            {
                buyPrice = prices[itr];
                if (prices.size() > 2)
                {
                    while (prices[sell] < prices[sell + 1] && sell < prices.size())
                    {
                        sell++;
                    }
                }
                sellPrice = prices[sell];
                profit += (sellPrice - buyPrice);
                itr = sell + 1;
                sell += 2;
                continue;
            }
            else
            {
                itr++;
                sell++;
                continue;
            }
        }
        return profit;
    }
};