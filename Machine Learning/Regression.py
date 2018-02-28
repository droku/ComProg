import pandas as pd 
import quandl 

df = quandl.get("SSE/GGQ1")

print(df.head())


