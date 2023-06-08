import requests
import json

def get_planets():
    url = 'https://swapi.dev/api/planets'
    response = requests.get(url)
    data = response.json()
    jsonified_data = json.dumps(data)
    print(jsonified_data)
    
get_planets()