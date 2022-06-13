from http.client import HTTPResponse
from django.shortcuts import render


def home(request):
    hello = """<h1>this is a page<h1>"""
    return HTTPResponse(hello)
