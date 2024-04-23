# Jam of the Month (PROJECT)
- Users join a club offering jams, jellies, and preserves
- They get a certain number of these per month, and extras on top of that cost more
- First prompt the user for which package they have, from the following:

- **Package A:**
    - $8/month
    - Includes 2 jams per month
    - Each additional jam on top of the 2 is $5 each
- **Package B:**
    - $12/month
    - Includes 4 jams per month
    - Each additional jam on top of the 4 is $4 each
- **Package C:**
    - $15/month
    - Includes 6 jams per month
    - Each additional jam on top of the 6 is $3 each

- Second, prompt the user for how many jams they purchased this month in total
- The program will then take the number of jams purchased and then tell the user their total cost, based on the package they have
    - If they stayed at or under the number of jams included in their monthly package, they only owe the monthly fee
    - If they went over, then you charge them the monthly fee **plus** the charge for eacha dditional jam at their package's rate